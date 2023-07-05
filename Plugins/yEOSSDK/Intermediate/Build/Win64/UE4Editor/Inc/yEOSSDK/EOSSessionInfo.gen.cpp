// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionInfo() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionInfo_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionInfo();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2P_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionState();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionInfo::execDestroySessionP2P)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DestroySessionP2P();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execGetBucketID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBucketID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execGetEOSSessionP2P)
	{
		P_GET_OBJECT_REF(UEOSSessionP2P,Z_Param_Out__pcSessionP2P);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEOSSessionP2P(Z_Param_Out__pcSessionP2P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execGetHostAddress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHostAddress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execGetReceivedSynchronizedPacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PSynchronizedPacketBase,Z_Param_Out__pcPacketBase);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReceivedSynchronizedPacket(Z_Param_Out__pcPacketBase,Z_Param__sPacketType,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execGetSendPacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PPacketBase,Z_Param_Out__pcPacketBase);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSendPacket(Z_Param_Out__pcPacketBase,Z_Param__sPacketType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execGetSendPackets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,UEOSSessionP2PPacketBase*>*)Z_Param__Result=P_THIS->GetSendPackets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execGetSendSynchronizedPacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PSynchronizedPacketBase,Z_Param_Out__pcPacketBase);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSendSynchronizedPacket(Z_Param_Out__pcPacketBase,Z_Param__sPacketType,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execGetSessionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionState*)Z_Param__Result=P_THIS->GetSessionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execGetStringOfSessionID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfSessionID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execIsAllowJoinInProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAllowJoinInProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execIsHostMigrationSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHostMigrationSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execIsHostMigrationTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHostMigrationTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execIsPresenceEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPresenceEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execSendConnectionPacket)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_GET_UBOOL(Z_Param__bNewJoinInUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendConnectionPacket(Z_Param__pcUserBase,Z_Param__bNewJoinInUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execSendQuitGameOnSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendQuitGameOnSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execSendSessionEventPacket)
	{
		P_GET_ENUM(EEOSSessionNotificationType,Z_Param__enNotificationType);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendSessionEventPacket(EEOSSessionNotificationType(Z_Param__enNotificationType),Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execSetEOSSessionP2P)
	{
		P_GET_OBJECT(UEOSSessionP2P,Z_Param__pcSessionP2P);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEOSSessionP2P(Z_Param__pcSessionP2P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionInfo::execSetHostMigrationTarget)
	{
		P_GET_UBOOL(Z_Param__bIsHostMigrationTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetHostMigrationTarget(Z_Param__bIsHostMigrationTarget);
		P_NATIVE_END;
	}
	void UEOSSessionInfo::StaticRegisterNativesUEOSSessionInfo()
	{
		UClass* Class = UEOSSessionInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroySessionP2P", &UEOSSessionInfo::execDestroySessionP2P },
			{ "GetBucketID", &UEOSSessionInfo::execGetBucketID },
			{ "GetEOSSessionP2P", &UEOSSessionInfo::execGetEOSSessionP2P },
			{ "GetHostAddress", &UEOSSessionInfo::execGetHostAddress },
			{ "GetReceivedSynchronizedPacket", &UEOSSessionInfo::execGetReceivedSynchronizedPacket },
			{ "GetSendPacket", &UEOSSessionInfo::execGetSendPacket },
			{ "GetSendPackets", &UEOSSessionInfo::execGetSendPackets },
			{ "GetSendSynchronizedPacket", &UEOSSessionInfo::execGetSendSynchronizedPacket },
			{ "GetSessionState", &UEOSSessionInfo::execGetSessionState },
			{ "GetStringOfSessionID", &UEOSSessionInfo::execGetStringOfSessionID },
			{ "IsAllowJoinInProgress", &UEOSSessionInfo::execIsAllowJoinInProgress },
			{ "IsHostMigrationSession", &UEOSSessionInfo::execIsHostMigrationSession },
			{ "IsHostMigrationTarget", &UEOSSessionInfo::execIsHostMigrationTarget },
			{ "IsPresenceEnabled", &UEOSSessionInfo::execIsPresenceEnabled },
			{ "SendConnectionPacket", &UEOSSessionInfo::execSendConnectionPacket },
			{ "SendQuitGameOnSession", &UEOSSessionInfo::execSendQuitGameOnSession },
			{ "SendSessionEventPacket", &UEOSSessionInfo::execSendSessionEventPacket },
			{ "SetEOSSessionP2P", &UEOSSessionInfo::execSetEOSSessionP2P },
			{ "SetHostMigrationTarget", &UEOSSessionInfo::execSetHostMigrationTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics
	{
		struct EOSSessionInfo_eventDestroySessionP2P_Parms
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
	void Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventDestroySessionP2P_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventDestroySessionP2P_Parms), &Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "DestroySessionP2P", nullptr, nullptr, sizeof(EOSSessionInfo_eventDestroySessionP2P_Parms), Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics
	{
		struct EOSSessionInfo_eventGetBucketID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetBucketID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "GetBucketID", nullptr, nullptr, sizeof(EOSSessionInfo_eventGetBucketID_Parms), Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_GetBucketID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_GetBucketID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics
	{
		struct EOSSessionInfo_eventGetEOSSessionP2P_Parms
		{
			UEOSSessionP2P* _pcSessionP2P;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionP2P;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::NewProp__pcSessionP2P = { "_pcSessionP2P", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetEOSSessionP2P_Parms, _pcSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventGetEOSSessionP2P_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventGetEOSSessionP2P_Parms), &Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::NewProp__pcSessionP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "GetEOSSessionP2P", nullptr, nullptr, sizeof(EOSSessionInfo_eventGetEOSSessionP2P_Parms), Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics
	{
		struct EOSSessionInfo_eventGetHostAddress_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetHostAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "GetHostAddress", nullptr, nullptr, sizeof(EOSSessionInfo_eventGetHostAddress_Parms), Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics
	{
		struct EOSSessionInfo_eventGetReceivedSynchronizedPacket_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp__pcPacketBase = { "_pcPacketBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetReceivedSynchronizedPacket_Parms, _pcPacketBase), Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetReceivedSynchronizedPacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetReceivedSynchronizedPacket_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventGetReceivedSynchronizedPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventGetReceivedSynchronizedPacket_Parms), &Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp__pcPacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "GetReceivedSynchronizedPacket", nullptr, nullptr, sizeof(EOSSessionInfo_eventGetReceivedSynchronizedPacket_Parms), Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics
	{
		struct EOSSessionInfo_eventGetSendPacket_Parms
		{
			UEOSSessionP2PPacketBase* _pcPacketBase;
			int32 _sPacketType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacketBase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::NewProp__pcPacketBase = { "_pcPacketBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetSendPacket_Parms, _pcPacketBase), Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetSendPacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventGetSendPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventGetSendPacket_Parms), &Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::NewProp__pcPacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "GetSendPacket", nullptr, nullptr, sizeof(EOSSessionInfo_eventGetSendPacket_Parms), Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics
	{
		struct EOSSessionInfo_eventGetSendPackets_Parms
		{
			TMap<int32,UEOSSessionP2PPacketBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetSendPackets_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "GetSendPackets", nullptr, nullptr, sizeof(EOSSessionInfo_eventGetSendPackets_Parms), Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics
	{
		struct EOSSessionInfo_eventGetSendSynchronizedPacket_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp__pcPacketBase = { "_pcPacketBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetSendSynchronizedPacket_Parms, _pcPacketBase), Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetSendSynchronizedPacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetSendSynchronizedPacket_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventGetSendSynchronizedPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventGetSendSynchronizedPacket_Parms), &Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp__pcPacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "GetSendSynchronizedPacket", nullptr, nullptr, sizeof(EOSSessionInfo_eventGetSendSynchronizedPacket_Parms), Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics
	{
		struct EOSSessionInfo_eventGetSessionState_Parms
		{
			EEOSSessionState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetSessionState_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "GetSessionState", nullptr, nullptr, sizeof(EOSSessionInfo_eventGetSessionState_Parms), Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_GetSessionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_GetSessionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics
	{
		struct EOSSessionInfo_eventGetStringOfSessionID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventGetStringOfSessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "GetStringOfSessionID", nullptr, nullptr, sizeof(EOSSessionInfo_eventGetStringOfSessionID_Parms), Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics
	{
		struct EOSSessionInfo_eventIsAllowJoinInProgress_Parms
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
	void Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventIsAllowJoinInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventIsAllowJoinInProgress_Parms), &Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "IsAllowJoinInProgress", nullptr, nullptr, sizeof(EOSSessionInfo_eventIsAllowJoinInProgress_Parms), Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics
	{
		struct EOSSessionInfo_eventIsHostMigrationSession_Parms
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
	void Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventIsHostMigrationSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventIsHostMigrationSession_Parms), &Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "IsHostMigrationSession", nullptr, nullptr, sizeof(EOSSessionInfo_eventIsHostMigrationSession_Parms), Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics
	{
		struct EOSSessionInfo_eventIsHostMigrationTarget_Parms
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
	void Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventIsHostMigrationTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventIsHostMigrationTarget_Parms), &Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "IsHostMigrationTarget", nullptr, nullptr, sizeof(EOSSessionInfo_eventIsHostMigrationTarget_Parms), Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics
	{
		struct EOSSessionInfo_eventIsPresenceEnabled_Parms
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
	void Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventIsPresenceEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventIsPresenceEnabled_Parms), &Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "IsPresenceEnabled", nullptr, nullptr, sizeof(EOSSessionInfo_eventIsPresenceEnabled_Parms), Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics
	{
		struct EOSSessionInfo_eventSendConnectionPacket_Parms
		{
			UEOSUserBase* _pcUserBase;
			bool _bNewJoinInUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
		static void NewProp__bNewJoinInUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bNewJoinInUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventSendConnectionPacket_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::NewProp__bNewJoinInUser_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventSendConnectionPacket_Parms*)Obj)->_bNewJoinInUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::NewProp__bNewJoinInUser = { "_bNewJoinInUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventSendConnectionPacket_Parms), &Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::NewProp__bNewJoinInUser_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventSendConnectionPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventSendConnectionPacket_Parms), &Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::NewProp__bNewJoinInUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "SendConnectionPacket", nullptr, nullptr, sizeof(EOSSessionInfo_eventSendConnectionPacket_Parms), Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics
	{
		struct EOSSessionInfo_eventSendQuitGameOnSession_Parms
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
	void Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventSendQuitGameOnSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventSendQuitGameOnSession_Parms), &Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "SendQuitGameOnSession", nullptr, nullptr, sizeof(EOSSessionInfo_eventSendQuitGameOnSession_Parms), Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics
	{
		struct EOSSessionInfo_eventSendSessionEventPacket_Parms
		{
			EEOSSessionNotificationType _enNotificationType;
			FString _strProductUserID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enNotificationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enNotificationType;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp__enNotificationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp__enNotificationType = { "_enNotificationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventSendSessionEventPacket_Parms, _enNotificationType), Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventSendSessionEventPacket_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventSendSessionEventPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventSendSessionEventPacket_Parms), &Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp__enNotificationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp__enNotificationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "SendSessionEventPacket", nullptr, nullptr, sizeof(EOSSessionInfo_eventSendSessionEventPacket_Parms), Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics
	{
		struct EOSSessionInfo_eventSetEOSSessionP2P_Parms
		{
			UEOSSessionP2P* _pcSessionP2P;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionP2P;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::NewProp__pcSessionP2P = { "_pcSessionP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionInfo_eventSetEOSSessionP2P_Parms, _pcSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventSetEOSSessionP2P_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventSetEOSSessionP2P_Parms), &Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::NewProp__pcSessionP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "SetEOSSessionP2P", nullptr, nullptr, sizeof(EOSSessionInfo_eventSetEOSSessionP2P_Parms), Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics
	{
		struct EOSSessionInfo_eventSetHostMigrationTarget_Parms
		{
			bool _bIsHostMigrationTarget;
			bool ReturnValue;
		};
		static void NewProp__bIsHostMigrationTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bIsHostMigrationTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::NewProp__bIsHostMigrationTarget_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventSetHostMigrationTarget_Parms*)Obj)->_bIsHostMigrationTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::NewProp__bIsHostMigrationTarget = { "_bIsHostMigrationTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventSetHostMigrationTarget_Parms), &Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::NewProp__bIsHostMigrationTarget_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionInfo_eventSetHostMigrationTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionInfo_eventSetHostMigrationTarget_Parms), &Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::NewProp__bIsHostMigrationTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionInfo, nullptr, "SetHostMigrationTarget", nullptr, nullptr, sizeof(EOSSessionInfo_eventSetHostMigrationTarget_Parms), Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionInfo_NoRegister()
	{
		return UEOSSessionInfo::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cSendPackets_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_cSendPackets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cSendPackets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cSendPackets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSessionP2P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSessionP2P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommunityInfoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionInfo_DestroySessionP2P, "DestroySessionP2P" }, // 776902796
		{ &Z_Construct_UFunction_UEOSSessionInfo_GetBucketID, "GetBucketID" }, // 2198274237
		{ &Z_Construct_UFunction_UEOSSessionInfo_GetEOSSessionP2P, "GetEOSSessionP2P" }, // 4161483800
		{ &Z_Construct_UFunction_UEOSSessionInfo_GetHostAddress, "GetHostAddress" }, // 3808232011
		{ &Z_Construct_UFunction_UEOSSessionInfo_GetReceivedSynchronizedPacket, "GetReceivedSynchronizedPacket" }, // 3090845238
		{ &Z_Construct_UFunction_UEOSSessionInfo_GetSendPacket, "GetSendPacket" }, // 2874399697
		{ &Z_Construct_UFunction_UEOSSessionInfo_GetSendPackets, "GetSendPackets" }, // 1552615068
		{ &Z_Construct_UFunction_UEOSSessionInfo_GetSendSynchronizedPacket, "GetSendSynchronizedPacket" }, // 115624109
		{ &Z_Construct_UFunction_UEOSSessionInfo_GetSessionState, "GetSessionState" }, // 2485549996
		{ &Z_Construct_UFunction_UEOSSessionInfo_GetStringOfSessionID, "GetStringOfSessionID" }, // 1572118025
		{ &Z_Construct_UFunction_UEOSSessionInfo_IsAllowJoinInProgress, "IsAllowJoinInProgress" }, // 3334974261
		{ &Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationSession, "IsHostMigrationSession" }, // 831012703
		{ &Z_Construct_UFunction_UEOSSessionInfo_IsHostMigrationTarget, "IsHostMigrationTarget" }, // 458202033
		{ &Z_Construct_UFunction_UEOSSessionInfo_IsPresenceEnabled, "IsPresenceEnabled" }, // 402581911
		{ &Z_Construct_UFunction_UEOSSessionInfo_SendConnectionPacket, "SendConnectionPacket" }, // 2471052027
		{ &Z_Construct_UFunction_UEOSSessionInfo_SendQuitGameOnSession, "SendQuitGameOnSession" }, // 4210706524
		{ &Z_Construct_UFunction_UEOSSessionInfo_SendSessionEventPacket, "SendSessionEventPacket" }, // 844117640
		{ &Z_Construct_UFunction_UEOSSessionInfo_SetEOSSessionP2P, "SetEOSSessionP2P" }, // 767284570
		{ &Z_Construct_UFunction_UEOSSessionInfo_SetHostMigrationTarget, "SetHostMigrationTarget" }, // 478348949
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_cSendPackets_ValueProp = { "m_cSendPackets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_cSendPackets_Key_KeyProp = { "m_cSendPackets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_cSendPackets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionInfo" },
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_cSendPackets = { "m_cSendPackets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionInfo, m_cSendPackets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_cSendPackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_cSendPackets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_pcSessionP2P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionInfo" },
		{ "ModuleRelativePath", "Public/EOSSessionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_pcSessionP2P = { "m_pcSessionP2P", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionInfo, m_pcSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_pcSessionP2P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_pcSessionP2P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_cSendPackets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_cSendPackets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_cSendPackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionInfo_Statics::NewProp_m_pcSessionP2P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionInfo_Statics::ClassParams = {
		&UEOSSessionInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSSessionInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionInfo, 3920769276);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionInfo>()
	{
		return UEOSSessionInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionInfo(Z_Construct_UClass_UEOSSessionInfo, &UEOSSessionInfo::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
