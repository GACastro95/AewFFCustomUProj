// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2P.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2P() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2P_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2P();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNatType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentBinary_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PPacketBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUpdateType();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSNatP2PEventDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSNatP2PReceivePacketDispatcher__DelegateSignature();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBaseWithCountMap_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSNatP2P::execAddAcceptSocket)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAcceptSocket(Z_Param__strSocketID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execAddRequestChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__uChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddRequestChannel(Z_Param__uChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execAddTransfer)
	{
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param__pcCachedTransfer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddTransfer(Z_Param__pcCachedTransfer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execAddUser)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddUser(Z_Param__pcUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execCreateP2PCachedTransfer)
	{
		P_GET_OBJECT_REF(UEOSNatP2PCachedTransfer,Z_Param_Out__pcCachedTransfer);
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommnuityBase);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_GET_PROPERTY(FByteProperty,Z_Param__uChannel);
		P_GET_PROPERTY(FIntProperty,Z_Param__sOptionBits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateP2PCachedTransfer(Z_Param_Out__pcCachedTransfer,Z_Param__pcCommnuityBase,Z_Param__strSocketID,Z_Param__uChannel,Z_Param__sOptionBits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execGetNatType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSNatType*)Z_Param__Result=P_THIS->GetNatType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execInitializeP2PCachedTransfer)
	{
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param__pcCachedTransfer);
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommnuityBase);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_GET_PROPERTY(FByteProperty,Z_Param__uChannel);
		P_GET_PROPERTY(FIntProperty,Z_Param__sOptionBits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeP2PCachedTransfer(Z_Param__pcCachedTransfer,Z_Param__pcCommnuityBase,Z_Param__strSocketID,Z_Param__uChannel,Z_Param__sOptionBits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execRemoveAcceptSocket)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAcceptSocket(Z_Param__strSocketID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execRemoveRequestChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__uChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveRequestChannel(Z_Param__uChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execRemoveTransfer)
	{
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param__pcCachedTransfer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTransfer(Z_Param__pcCachedTransfer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execRemoveUser)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUser(Z_Param__pcUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execRemoveUserById)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUserById(Z_Param__strUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execRequestNatType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestNatType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execSendArray)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out__cData);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUser);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_GET_PROPERTY(FByteProperty,Z_Param__uChannel);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__enReliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendArray(Z_Param_Out__cData,Z_Param__pcUser,Z_Param__strSocketID,Z_Param__uChannel,EEOSPacketReliability(Z_Param__enReliability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execSendBinary)
	{
		P_GET_OBJECT(UEOSNatP2PBinary,Z_Param__pcData);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUser);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__enReliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendBinary(Z_Param__pcData,Z_Param__pcUser,Z_Param__strSocketID,EEOSPacketReliability(Z_Param__enReliability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execSendContentBinary)
	{
		P_GET_OBJECT(UEOSUserContentBinary,Z_Param__pcData);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUser);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_GET_PROPERTY(FByteProperty,Z_Param__uChannel);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__enReliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendContentBinary(Z_Param__pcData,Z_Param__pcUser,Z_Param__strSocketID,Z_Param__uChannel,EEOSPacketReliability(Z_Param__enReliability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execSendPacket)
	{
		P_GET_OBJECT(UEOSNatP2PPacketBase,Z_Param__pcData);
		P_GET_UBOOL(Z_Param__bAllUser);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__enReliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendPacket(Z_Param__pcData,Z_Param__bAllUser,EEOSPacketReliability(Z_Param__enReliability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execSetAcceptAnyUser)
	{
		P_GET_UBOOL(Z_Param__bAccept);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAcceptAnyUser(Z_Param__bAccept);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSNatP2PAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSNatP2P::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execSetOnlyTransferUpdates)
	{
		P_GET_UBOOL(Z_Param__bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnlyTransferUpdates(Z_Param__bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execSetTargetUserType)
	{
		P_GET_ENUM(EEOSUserType,Z_Param__enUserType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetUserType(EEOSUserType(Z_Param__enUserType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execSetUpdateType)
	{
		P_GET_ENUM(EEOSUpdateType,Z_Param__enType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUpdateType(EEOSUpdateType(Z_Param__enType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execSetupInternalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupInternalCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2P::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Update();
		P_NATIVE_END;
	}
	void UEOSNatP2P::StaticRegisterNativesUEOSNatP2P()
	{
		UClass* Class = UEOSNatP2P::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAcceptSocket", &UEOSNatP2P::execAddAcceptSocket },
			{ "AddRequestChannel", &UEOSNatP2P::execAddRequestChannel },
			{ "AddTransfer", &UEOSNatP2P::execAddTransfer },
			{ "AddUser", &UEOSNatP2P::execAddUser },
			{ "CreateP2PCachedTransfer", &UEOSNatP2P::execCreateP2PCachedTransfer },
			{ "GetNatType", &UEOSNatP2P::execGetNatType },
			{ "InitializeP2PCachedTransfer", &UEOSNatP2P::execInitializeP2PCachedTransfer },
			{ "RemoveAcceptSocket", &UEOSNatP2P::execRemoveAcceptSocket },
			{ "RemoveRequestChannel", &UEOSNatP2P::execRemoveRequestChannel },
			{ "RemoveTransfer", &UEOSNatP2P::execRemoveTransfer },
			{ "RemoveUser", &UEOSNatP2P::execRemoveUser },
			{ "RemoveUserById", &UEOSNatP2P::execRemoveUserById },
			{ "RequestNatType", &UEOSNatP2P::execRequestNatType },
			{ "SendArray", &UEOSNatP2P::execSendArray },
			{ "SendBinary", &UEOSNatP2P::execSendBinary },
			{ "SendContentBinary", &UEOSNatP2P::execSendContentBinary },
			{ "SendPacket", &UEOSNatP2P::execSendPacket },
			{ "SetAcceptAnyUser", &UEOSNatP2P::execSetAcceptAnyUser },
			{ "SetApiVersion", &UEOSNatP2P::execSetApiVersion },
			{ "SetOnlyTransferUpdates", &UEOSNatP2P::execSetOnlyTransferUpdates },
			{ "SetTargetUserType", &UEOSNatP2P::execSetTargetUserType },
			{ "SetUpdateType", &UEOSNatP2P::execSetUpdateType },
			{ "SetupInternalCallback", &UEOSNatP2P::execSetupInternalCallback },
			{ "Update", &UEOSNatP2P::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics
	{
		struct EOSNatP2P_eventAddAcceptSocket_Parms
		{
			FString _strSocketID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSocketID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventAddAcceptSocket_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::NewProp__strSocketID_MetaData)) };
	void Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventAddAcceptSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventAddAcceptSocket_Parms), &Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "AddAcceptSocket", nullptr, nullptr, sizeof(EOSNatP2P_eventAddAcceptSocket_Parms), Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics
	{
		struct EOSNatP2P_eventAddRequestChannel_Parms
		{
			uint8 _uChannel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uChannel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::NewProp__uChannel = { "_uChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventAddRequestChannel_Parms, _uChannel), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventAddRequestChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventAddRequestChannel_Parms), &Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::NewProp__uChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "AddRequestChannel", nullptr, nullptr, sizeof(EOSNatP2P_eventAddRequestChannel_Parms), Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics
	{
		struct EOSNatP2P_eventAddTransfer_Parms
		{
			UEOSNatP2PCachedTransfer* _pcCachedTransfer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCachedTransfer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::NewProp__pcCachedTransfer = { "_pcCachedTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventAddTransfer_Parms, _pcCachedTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventAddTransfer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventAddTransfer_Parms), &Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::NewProp__pcCachedTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "AddTransfer", nullptr, nullptr, sizeof(EOSNatP2P_eventAddTransfer_Parms), Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_AddTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_AddTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics
	{
		struct EOSNatP2P_eventAddUser_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventAddUser_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventAddUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventAddUser_Parms), &Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "AddUser", nullptr, nullptr, sizeof(EOSNatP2P_eventAddUser_Parms), Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_AddUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_AddUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics
	{
		struct EOSNatP2P_eventCreateP2PCachedTransfer_Parms
		{
			UEOSNatP2PCachedTransfer* _pcCachedTransfer;
			UEOSCommunityInfoBase* _pcCommnuityBase;
			FString _strSocketID;
			uint8 _uChannel;
			int32 _sOptionBits;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCachedTransfer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommnuityBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSocketID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uChannel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sOptionBits;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__pcCachedTransfer = { "_pcCachedTransfer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventCreateP2PCachedTransfer_Parms, _pcCachedTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__pcCommnuityBase = { "_pcCommnuityBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventCreateP2PCachedTransfer_Parms, _pcCommnuityBase), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventCreateP2PCachedTransfer_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__strSocketID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__uChannel = { "_uChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventCreateP2PCachedTransfer_Parms, _uChannel), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__sOptionBits = { "_sOptionBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventCreateP2PCachedTransfer_Parms, _sOptionBits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventCreateP2PCachedTransfer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventCreateP2PCachedTransfer_Parms), &Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__pcCachedTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__pcCommnuityBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__uChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp__sOptionBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "CreateP2PCachedTransfer", nullptr, nullptr, sizeof(EOSNatP2P_eventCreateP2PCachedTransfer_Parms), Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics
	{
		struct EOSNatP2P_eventGetNatType_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventGetNatType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSNatType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "GetNatType", nullptr, nullptr, sizeof(EOSNatP2P_eventGetNatType_Parms), Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_GetNatType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_GetNatType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics
	{
		struct EOSNatP2P_eventInitializeP2PCachedTransfer_Parms
		{
			UEOSNatP2PCachedTransfer* _pcCachedTransfer;
			UEOSCommunityInfoBase* _pcCommnuityBase;
			FString _strSocketID;
			uint8 _uChannel;
			int32 _sOptionBits;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCachedTransfer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommnuityBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSocketID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uChannel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sOptionBits;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__pcCachedTransfer = { "_pcCachedTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventInitializeP2PCachedTransfer_Parms, _pcCachedTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__pcCommnuityBase = { "_pcCommnuityBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventInitializeP2PCachedTransfer_Parms, _pcCommnuityBase), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventInitializeP2PCachedTransfer_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__strSocketID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__uChannel = { "_uChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventInitializeP2PCachedTransfer_Parms, _uChannel), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__sOptionBits = { "_sOptionBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventInitializeP2PCachedTransfer_Parms, _sOptionBits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventInitializeP2PCachedTransfer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventInitializeP2PCachedTransfer_Parms), &Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__pcCachedTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__pcCommnuityBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__uChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp__sOptionBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "InitializeP2PCachedTransfer", nullptr, nullptr, sizeof(EOSNatP2P_eventInitializeP2PCachedTransfer_Parms), Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics
	{
		struct EOSNatP2P_eventRemoveAcceptSocket_Parms
		{
			FString _strSocketID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSocketID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventRemoveAcceptSocket_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::NewProp__strSocketID_MetaData)) };
	void Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventRemoveAcceptSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventRemoveAcceptSocket_Parms), &Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "RemoveAcceptSocket", nullptr, nullptr, sizeof(EOSNatP2P_eventRemoveAcceptSocket_Parms), Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics
	{
		struct EOSNatP2P_eventRemoveRequestChannel_Parms
		{
			uint8 _uChannel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uChannel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::NewProp__uChannel = { "_uChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventRemoveRequestChannel_Parms, _uChannel), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventRemoveRequestChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventRemoveRequestChannel_Parms), &Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::NewProp__uChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "RemoveRequestChannel", nullptr, nullptr, sizeof(EOSNatP2P_eventRemoveRequestChannel_Parms), Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics
	{
		struct EOSNatP2P_eventRemoveTransfer_Parms
		{
			UEOSNatP2PCachedTransfer* _pcCachedTransfer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCachedTransfer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::NewProp__pcCachedTransfer = { "_pcCachedTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventRemoveTransfer_Parms, _pcCachedTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventRemoveTransfer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventRemoveTransfer_Parms), &Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::NewProp__pcCachedTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "RemoveTransfer", nullptr, nullptr, sizeof(EOSNatP2P_eventRemoveTransfer_Parms), Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics
	{
		struct EOSNatP2P_eventRemoveUser_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventRemoveUser_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventRemoveUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventRemoveUser_Parms), &Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "RemoveUser", nullptr, nullptr, sizeof(EOSNatP2P_eventRemoveUser_Parms), Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_RemoveUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_RemoveUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics
	{
		struct EOSNatP2P_eventRemoveUserById_Parms
		{
			FString _strUserId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strUserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::NewProp__strUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::NewProp__strUserId = { "_strUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventRemoveUserById_Parms, _strUserId), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::NewProp__strUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::NewProp__strUserId_MetaData)) };
	void Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventRemoveUserById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventRemoveUserById_Parms), &Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::NewProp__strUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "RemoveUserById", nullptr, nullptr, sizeof(EOSNatP2P_eventRemoveUserById_Parms), Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_RemoveUserById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_RemoveUserById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics
	{
		struct EOSNatP2P_eventRequestNatType_Parms
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
	void Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventRequestNatType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventRequestNatType_Parms), &Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "RequestNatType", nullptr, nullptr, sizeof(EOSNatP2P_eventRequestNatType_Parms), Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_RequestNatType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_RequestNatType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics
	{
		struct EOSNatP2P_eventSendArray_Parms
		{
			TArray<uint8> _cData;
			const UEOSUserBase* _pcUser;
			FString _strSocketID;
			uint8 _uChannel;
			EEOSPacketReliability _enReliability;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__cData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSocketID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enReliability_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enReliability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__cData_Inner = { "_cData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__cData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__cData = { "_cData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendArray_Parms, _cData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__cData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__cData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__pcUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendArray_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__pcUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__pcUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendArray_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__strSocketID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__uChannel = { "_uChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendArray_Parms, _uChannel), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__enReliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__enReliability = { "_enReliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendArray_Parms, _enReliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventSendArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventSendArray_Parms), &Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__cData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__cData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__uChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__enReliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp__enReliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "SendArray", nullptr, nullptr, sizeof(EOSNatP2P_eventSendArray_Parms), Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_SendArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_SendArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics
	{
		struct EOSNatP2P_eventSendBinary_Parms
		{
			const UEOSNatP2PBinary* _pcData;
			const UEOSUserBase* _pcUser;
			FString _strSocketID;
			EEOSPacketReliability _enReliability;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSocketID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enReliability_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enReliability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__pcData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__pcData = { "_pcData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendBinary_Parms, _pcData), Z_Construct_UClass_UEOSNatP2PBinary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__pcData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__pcData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__pcUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendBinary_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__pcUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__pcUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendBinary_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__strSocketID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__enReliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__enReliability = { "_enReliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendBinary_Parms, _enReliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventSendBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventSendBinary_Parms), &Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__pcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__enReliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp__enReliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "SendBinary", nullptr, nullptr, sizeof(EOSNatP2P_eventSendBinary_Parms), Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_SendBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_SendBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics
	{
		struct EOSNatP2P_eventSendContentBinary_Parms
		{
			const UEOSUserContentBinary* _pcData;
			const UEOSUserBase* _pcUser;
			FString _strSocketID;
			uint8 _uChannel;
			EEOSPacketReliability _enReliability;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSocketID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enReliability_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enReliability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__pcData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__pcData = { "_pcData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendContentBinary_Parms, _pcData), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__pcData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__pcData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__pcUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendContentBinary_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__pcUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__pcUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendContentBinary_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__strSocketID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__uChannel = { "_uChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendContentBinary_Parms, _uChannel), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__enReliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__enReliability = { "_enReliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendContentBinary_Parms, _enReliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventSendContentBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventSendContentBinary_Parms), &Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__pcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__uChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__enReliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp__enReliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "SendContentBinary", nullptr, nullptr, sizeof(EOSNatP2P_eventSendContentBinary_Parms), Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_SendContentBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_SendContentBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics
	{
		struct EOSNatP2P_eventSendPacket_Parms
		{
			UEOSNatP2PPacketBase* _pcData;
			bool _bAllUser;
			EEOSPacketReliability _enReliability;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcData;
		static void NewProp__bAllUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAllUser;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enReliability_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enReliability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp__pcData = { "_pcData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendPacket_Parms, _pcData), Z_Construct_UClass_UEOSNatP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp__bAllUser_SetBit(void* Obj)
	{
		((EOSNatP2P_eventSendPacket_Parms*)Obj)->_bAllUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp__bAllUser = { "_bAllUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventSendPacket_Parms), &Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp__bAllUser_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp__enReliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp__enReliability = { "_enReliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSendPacket_Parms, _enReliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventSendPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventSendPacket_Parms), &Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp__pcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp__bAllUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp__enReliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp__enReliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "SendPacket", nullptr, nullptr, sizeof(EOSNatP2P_eventSendPacket_Parms), Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_SendPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_SendPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics
	{
		struct EOSNatP2P_eventSetAcceptAnyUser_Parms
		{
			bool _bAccept;
		};
		static void NewProp__bAccept_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAccept;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::NewProp__bAccept_SetBit(void* Obj)
	{
		((EOSNatP2P_eventSetAcceptAnyUser_Parms*)Obj)->_bAccept = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::NewProp__bAccept = { "_bAccept", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventSetAcceptAnyUser_Parms), &Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::NewProp__bAccept_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::NewProp__bAccept,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "SetAcceptAnyUser", nullptr, nullptr, sizeof(EOSNatP2P_eventSetAcceptAnyUser_Parms), Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics
	{
		struct EOSNatP2P_eventSetApiVersion_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSNatP2PAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSNatP2P_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics
	{
		struct EOSNatP2P_eventSetOnlyTransferUpdates_Parms
		{
			bool _bEnable;
		};
		static void NewProp__bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::NewProp__bEnable_SetBit(void* Obj)
	{
		((EOSNatP2P_eventSetOnlyTransferUpdates_Parms*)Obj)->_bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::NewProp__bEnable = { "_bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventSetOnlyTransferUpdates_Parms), &Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::NewProp__bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::NewProp__bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "SetOnlyTransferUpdates", nullptr, nullptr, sizeof(EOSNatP2P_eventSetOnlyTransferUpdates_Parms), Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics
	{
		struct EOSNatP2P_eventSetTargetUserType_Parms
		{
			EEOSUserType _enUserType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enUserType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enUserType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::NewProp__enUserType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::NewProp__enUserType = { "_enUserType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSetTargetUserType_Parms, _enUserType), Z_Construct_UEnum_yEOSSDK_EEOSUserType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::NewProp__enUserType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::NewProp__enUserType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "SetTargetUserType", nullptr, nullptr, sizeof(EOSNatP2P_eventSetTargetUserType_Parms), Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics
	{
		struct EOSNatP2P_eventSetUpdateType_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2P_eventSetUpdateType_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSUpdateType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventSetUpdateType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventSetUpdateType_Parms), &Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "SetUpdateType", nullptr, nullptr, sizeof(EOSNatP2P_eventSetUpdateType_Parms), Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_SetUpdateType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_SetUpdateType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics
	{
		struct EOSNatP2P_eventSetupInternalCallback_Parms
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
	void Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventSetupInternalCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventSetupInternalCallback_Parms), &Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "SetupInternalCallback", nullptr, nullptr, sizeof(EOSNatP2P_eventSetupInternalCallback_Parms), Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2P_Update_Statics
	{
		struct EOSNatP2P_eventUpdate_Parms
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
	void Z_Construct_UFunction_UEOSNatP2P_Update_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2P_eventUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2P_Update_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2P_eventUpdate_Parms), &Z_Construct_UFunction_UEOSNatP2P_Update_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2P_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2P_Update_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2P_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2P_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2P, nullptr, "Update", nullptr, nullptr, sizeof(EOSNatP2P_eventUpdate_Parms), Z_Construct_UFunction_UEOSNatP2P_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2P_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2P_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2P_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2P_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSNatP2P_NoRegister()
	{
		return UEOSNatP2P::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNatP2P_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2PEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_P2PEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2PReceivePacketDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_P2PReceivePacketDispatcher;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_cAcceptSocketIDs_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cAcceptSocketIDs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cAcceptSocketIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cAcceptSocketIDs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cUsers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cUsers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cUsers;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_cRequestChanneles_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_cRequestChanneles_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cRequestChanneles_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cRequestChanneles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcUserManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcUserManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNatP2P_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSNatP2P_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSNatP2P_AddAcceptSocket, "AddAcceptSocket" }, // 3202545149
		{ &Z_Construct_UFunction_UEOSNatP2P_AddRequestChannel, "AddRequestChannel" }, // 1959428658
		{ &Z_Construct_UFunction_UEOSNatP2P_AddTransfer, "AddTransfer" }, // 2360125161
		{ &Z_Construct_UFunction_UEOSNatP2P_AddUser, "AddUser" }, // 836124336
		{ &Z_Construct_UFunction_UEOSNatP2P_CreateP2PCachedTransfer, "CreateP2PCachedTransfer" }, // 3147773185
		{ &Z_Construct_UFunction_UEOSNatP2P_GetNatType, "GetNatType" }, // 965377141
		{ &Z_Construct_UFunction_UEOSNatP2P_InitializeP2PCachedTransfer, "InitializeP2PCachedTransfer" }, // 4274324064
		{ &Z_Construct_UFunction_UEOSNatP2P_RemoveAcceptSocket, "RemoveAcceptSocket" }, // 2045635373
		{ &Z_Construct_UFunction_UEOSNatP2P_RemoveRequestChannel, "RemoveRequestChannel" }, // 3948288820
		{ &Z_Construct_UFunction_UEOSNatP2P_RemoveTransfer, "RemoveTransfer" }, // 4011672611
		{ &Z_Construct_UFunction_UEOSNatP2P_RemoveUser, "RemoveUser" }, // 1904203066
		{ &Z_Construct_UFunction_UEOSNatP2P_RemoveUserById, "RemoveUserById" }, // 645518941
		{ &Z_Construct_UFunction_UEOSNatP2P_RequestNatType, "RequestNatType" }, // 227412940
		{ &Z_Construct_UFunction_UEOSNatP2P_SendArray, "SendArray" }, // 2525553249
		{ &Z_Construct_UFunction_UEOSNatP2P_SendBinary, "SendBinary" }, // 3380184815
		{ &Z_Construct_UFunction_UEOSNatP2P_SendContentBinary, "SendContentBinary" }, // 1881904313
		{ &Z_Construct_UFunction_UEOSNatP2P_SendPacket, "SendPacket" }, // 309686741
		{ &Z_Construct_UFunction_UEOSNatP2P_SetAcceptAnyUser, "SetAcceptAnyUser" }, // 1659602020
		{ &Z_Construct_UFunction_UEOSNatP2P_SetApiVersion, "SetApiVersion" }, // 1734603652
		{ &Z_Construct_UFunction_UEOSNatP2P_SetOnlyTransferUpdates, "SetOnlyTransferUpdates" }, // 4071047703
		{ &Z_Construct_UFunction_UEOSNatP2P_SetTargetUserType, "SetTargetUserType" }, // 2425044078
		{ &Z_Construct_UFunction_UEOSNatP2P_SetUpdateType, "SetUpdateType" }, // 420077515
		{ &Z_Construct_UFunction_UEOSNatP2P_SetupInternalCallback, "SetupInternalCallback" }, // 1558074338
		{ &Z_Construct_UFunction_UEOSNatP2P_Update, "Update" }, // 1750461465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2P_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSNatP2P.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_P2PEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2P" },
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_P2PEventDispatcher = { "P2PEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2P, P2PEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSNatP2PEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_P2PEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_P2PEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_P2PReceivePacketDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2P" },
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_P2PReceivePacketDispatcher = { "P2PReceivePacketDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2P, P2PReceivePacketDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSNatP2PReceivePacketDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_P2PReceivePacketDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_P2PReceivePacketDispatcher_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cAcceptSocketIDs_ValueProp = { "m_cAcceptSocketIDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cAcceptSocketIDs_Key_KeyProp = { "m_cAcceptSocketIDs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cAcceptSocketIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2P" },
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cAcceptSocketIDs = { "m_cAcceptSocketIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2P, m_cAcceptSocketIDs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cAcceptSocketIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cAcceptSocketIDs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cUsers_ValueProp = { "m_cUsers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSUserBaseWithCountMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cUsers_Key_KeyProp = { "m_cUsers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2P" },
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cUsers = { "m_cUsers", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2P, m_cUsers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cUsers_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cRequestChanneles_ValueProp = { "m_cRequestChanneles", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cRequestChanneles_Key_KeyProp = { "m_cRequestChanneles_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cRequestChanneles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2P" },
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cRequestChanneles = { "m_cRequestChanneles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2P, m_cRequestChanneles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cRequestChanneles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cRequestChanneles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_pcUserManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2P" },
		{ "ModuleRelativePath", "Public/EOSNatP2P.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_pcUserManager = { "m_pcUserManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2P, m_pcUserManager), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_pcUserManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_pcUserManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSNatP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_P2PEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_P2PReceivePacketDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cAcceptSocketIDs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cAcceptSocketIDs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cAcceptSocketIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cUsers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cUsers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cRequestChanneles_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cRequestChanneles_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_cRequestChanneles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2P_Statics::NewProp_m_pcUserManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNatP2P_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNatP2P>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNatP2P_Statics::ClassParams = {
		&UEOSNatP2P::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSNatP2P_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2P_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2P_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2P_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNatP2P()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNatP2P_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNatP2P, 1853794361);
	template<> YEOSSDK_API UClass* StaticClass<UEOSNatP2P>()
	{
		return UEOSNatP2P::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNatP2P(Z_Construct_UClass_UEOSNatP2P, &UEOSNatP2P::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSNatP2P"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNatP2P);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
