// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PCachedTransfer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PCachedTransfer() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentBinary_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2P_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSCachedTransferReceivedDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_OESNatP2PCachedTransferEventDispatcher__DelegateSignature();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PReceiveBuffer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execAddUser)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_GET_UBOOL(Z_Param__bSystemUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddUser(Z_Param__pcUserBase,Z_Param__bSystemUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execClearPacketQueue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearPacketQueue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execContainsUser)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsUser(Z_Param__pcUserBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execGetChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execGetSocketID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSocketID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execGetStringOfOwnerProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfOwnerProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execIsSameSocketID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSameSocketID(Z_Param__strSocketID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execOnReceive)
	{
		P_GET_OBJECT(UEOSNatP2PBinary,Z_Param__pcBinary);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceive(Z_Param__pcBinary,Z_Param__pcUserBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execRemoveAllUsers)
	{
		P_GET_UBOOL(Z_Param__bSystemUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAllUsers(Z_Param__bSystemUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execRemoveUser)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_GET_UBOOL(Z_Param__bSystemUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUser(Z_Param__pcUserBase,Z_Param__bSystemUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execSendArray)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out__cData);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__enReliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendArray(Z_Param_Out__cData,Z_Param__pcUserBase,EEOSPacketReliability(Z_Param__enReliability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execSendBinary)
	{
		P_GET_OBJECT(UEOSNatP2PBinary,Z_Param__pcData);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__enReliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendBinary(Z_Param__pcData,Z_Param__pcUserBase,EEOSPacketReliability(Z_Param__enReliability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execSendContentBinary)
	{
		P_GET_OBJECT(UEOSUserContentBinary,Z_Param__pcData);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__enReliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendContentBinary(Z_Param__pcData,Z_Param__pcUserBase,EEOSPacketReliability(Z_Param__enReliability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execSendPacket)
	{
		P_GET_OBJECT(UEOSNatP2PPacketBase,Z_Param__pcData);
		P_GET_UBOOL(Z_Param__bAllUser);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__enReliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendPacket(Z_Param__pcData,Z_Param__bAllUser,EEOSPacketReliability(Z_Param__enReliability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execSetup)
	{
		P_GET_OBJECT(UEOSNatP2P,Z_Param__pcNatP2P);
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommnuityBase);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_GET_PROPERTY(FByteProperty,Z_Param__uChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param__pcNatP2P,Z_Param__pcCommnuityBase,Z_Param__strSocketID,Z_Param__uChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execSetUsers)
	{
		P_GET_TARRAY(UEOSCommunityUserBase*,Z_Param__pcUserBases);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUsers(Z_Param__pcUserBases);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PCachedTransfer::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update();
		P_NATIVE_END;
	}
	void UEOSNatP2PCachedTransfer::StaticRegisterNativesUEOSNatP2PCachedTransfer()
	{
		UClass* Class = UEOSNatP2PCachedTransfer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddUser", &UEOSNatP2PCachedTransfer::execAddUser },
			{ "ClearPacketQueue", &UEOSNatP2PCachedTransfer::execClearPacketQueue },
			{ "ContainsUser", &UEOSNatP2PCachedTransfer::execContainsUser },
			{ "GetChannel", &UEOSNatP2PCachedTransfer::execGetChannel },
			{ "GetSocketID", &UEOSNatP2PCachedTransfer::execGetSocketID },
			{ "GetStringOfOwnerProductUserID", &UEOSNatP2PCachedTransfer::execGetStringOfOwnerProductUserID },
			{ "IsSameSocketID", &UEOSNatP2PCachedTransfer::execIsSameSocketID },
			{ "OnReceive", &UEOSNatP2PCachedTransfer::execOnReceive },
			{ "RemoveAllUsers", &UEOSNatP2PCachedTransfer::execRemoveAllUsers },
			{ "RemoveUser", &UEOSNatP2PCachedTransfer::execRemoveUser },
			{ "SendArray", &UEOSNatP2PCachedTransfer::execSendArray },
			{ "SendBinary", &UEOSNatP2PCachedTransfer::execSendBinary },
			{ "SendContentBinary", &UEOSNatP2PCachedTransfer::execSendContentBinary },
			{ "SendPacket", &UEOSNatP2PCachedTransfer::execSendPacket },
			{ "Setup", &UEOSNatP2PCachedTransfer::execSetup },
			{ "SetUsers", &UEOSNatP2PCachedTransfer::execSetUsers },
			{ "Update", &UEOSNatP2PCachedTransfer::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics
	{
		struct EOSNatP2PCachedTransfer_eventAddUser_Parms
		{
			UEOSUserBase* _pcUserBase;
			bool _bSystemUpdate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
		static void NewProp__bSystemUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bSystemUpdate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventAddUser_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::NewProp__bSystemUpdate_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventAddUser_Parms*)Obj)->_bSystemUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::NewProp__bSystemUpdate = { "_bSystemUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventAddUser_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::NewProp__bSystemUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventAddUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventAddUser_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::NewProp__bSystemUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "AddUser", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventAddUser_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics
	{
		struct EOSNatP2PCachedTransfer_eventClearPacketQueue_Parms
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
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventClearPacketQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventClearPacketQueue_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "ClearPacketQueue", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventClearPacketQueue_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics
	{
		struct EOSNatP2PCachedTransfer_eventContainsUser_Parms
		{
			UEOSUserBase* _pcUserBase;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventContainsUser_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventContainsUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventContainsUser_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "ContainsUser", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventContainsUser_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics
	{
		struct EOSNatP2PCachedTransfer_eventGetChannel_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventGetChannel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "GetChannel", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventGetChannel_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics
	{
		struct EOSNatP2PCachedTransfer_eventGetSocketID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventGetSocketID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "GetSocketID", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventGetSocketID_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics
	{
		struct EOSNatP2PCachedTransfer_eventGetStringOfOwnerProductUserID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventGetStringOfOwnerProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "GetStringOfOwnerProductUserID", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventGetStringOfOwnerProductUserID_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics
	{
		struct EOSNatP2PCachedTransfer_eventIsSameSocketID_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventIsSameSocketID_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::NewProp__strSocketID_MetaData)) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventIsSameSocketID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventIsSameSocketID_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "IsSameSocketID", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventIsSameSocketID_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics
	{
		struct EOSNatP2PCachedTransfer_eventOnReceive_Parms
		{
			UEOSNatP2PBinary* _pcBinary;
			UEOSUserBase* _pcUserBase;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcBinary;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::NewProp__pcBinary = { "_pcBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventOnReceive_Parms, _pcBinary), Z_Construct_UClass_UEOSNatP2PBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventOnReceive_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::NewProp__pcBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::NewProp__pcUserBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "OnReceive", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventOnReceive_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics
	{
		struct EOSNatP2PCachedTransfer_eventRemoveAllUsers_Parms
		{
			bool _bSystemUpdate;
			bool ReturnValue;
		};
		static void NewProp__bSystemUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bSystemUpdate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::NewProp__bSystemUpdate_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventRemoveAllUsers_Parms*)Obj)->_bSystemUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::NewProp__bSystemUpdate = { "_bSystemUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventRemoveAllUsers_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::NewProp__bSystemUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventRemoveAllUsers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventRemoveAllUsers_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::NewProp__bSystemUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "RemoveAllUsers", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventRemoveAllUsers_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics
	{
		struct EOSNatP2PCachedTransfer_eventRemoveUser_Parms
		{
			UEOSUserBase* _pcUserBase;
			bool _bSystemUpdate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
		static void NewProp__bSystemUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bSystemUpdate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventRemoveUser_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::NewProp__bSystemUpdate_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventRemoveUser_Parms*)Obj)->_bSystemUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::NewProp__bSystemUpdate = { "_bSystemUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventRemoveUser_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::NewProp__bSystemUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventRemoveUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventRemoveUser_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::NewProp__bSystemUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "RemoveUser", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventRemoveUser_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics
	{
		struct EOSNatP2PCachedTransfer_eventSendArray_Parms
		{
			TArray<uint8> _cData;
			UEOSUserBase* _pcUserBase;
			EEOSPacketReliability _enReliability;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__cData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__cData_Inner = { "_cData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__cData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__cData = { "_cData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendArray_Parms, _cData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__cData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__cData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendArray_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__enReliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__enReliability = { "_enReliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendArray_Parms, _enReliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventSendArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventSendArray_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__cData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__cData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__enReliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp__enReliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "SendArray", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventSendArray_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics
	{
		struct EOSNatP2PCachedTransfer_eventSendBinary_Parms
		{
			const UEOSNatP2PBinary* _pcData;
			UEOSUserBase* _pcUserBase;
			EEOSPacketReliability _enReliability;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__pcData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__pcData = { "_pcData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendBinary_Parms, _pcData), Z_Construct_UClass_UEOSNatP2PBinary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__pcData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__pcData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendBinary_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__enReliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__enReliability = { "_enReliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendBinary_Parms, _enReliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventSendBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventSendBinary_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__pcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__enReliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp__enReliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "SendBinary", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventSendBinary_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics
	{
		struct EOSNatP2PCachedTransfer_eventSendContentBinary_Parms
		{
			const UEOSUserContentBinary* _pcData;
			UEOSUserBase* _pcUserBase;
			EEOSPacketReliability _enReliability;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__pcData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__pcData = { "_pcData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendContentBinary_Parms, _pcData), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__pcData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__pcData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendContentBinary_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__enReliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__enReliability = { "_enReliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendContentBinary_Parms, _enReliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventSendContentBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventSendContentBinary_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__pcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__enReliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp__enReliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "SendContentBinary", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventSendContentBinary_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics
	{
		struct EOSNatP2PCachedTransfer_eventSendPacket_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp__pcData = { "_pcData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendPacket_Parms, _pcData), Z_Construct_UClass_UEOSNatP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp__bAllUser_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventSendPacket_Parms*)Obj)->_bAllUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp__bAllUser = { "_bAllUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventSendPacket_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp__bAllUser_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp__enReliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp__enReliability = { "_enReliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSendPacket_Parms, _enReliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventSendPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventSendPacket_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp__pcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp__bAllUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp__enReliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp__enReliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "SendPacket", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventSendPacket_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics
	{
		struct EOSNatP2PCachedTransfer_eventSetup_Parms
		{
			UEOSNatP2P* _pcNatP2P;
			UEOSCommunityInfoBase* _pcCommnuityBase;
			FString _strSocketID;
			uint8 _uChannel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcNatP2P;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommnuityBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSocketID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uChannel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__pcNatP2P = { "_pcNatP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSetup_Parms, _pcNatP2P), Z_Construct_UClass_UEOSNatP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__pcCommnuityBase = { "_pcCommnuityBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSetup_Parms, _pcCommnuityBase), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSetup_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__strSocketID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__uChannel = { "_uChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSetup_Parms, _uChannel), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventSetup_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__pcNatP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__pcCommnuityBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp__uChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "Setup", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventSetup_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics
	{
		struct EOSNatP2PCachedTransfer_eventSetUsers_Parms
		{
			TArray<UEOSCommunityUserBase*> _pcUserBases;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBases_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pcUserBases;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::NewProp__pcUserBases_Inner = { "_pcUserBases", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::NewProp__pcUserBases = { "_pcUserBases", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PCachedTransfer_eventSetUsers_Parms, _pcUserBases), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PCachedTransfer_eventSetUsers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PCachedTransfer_eventSetUsers_Parms), &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::NewProp__pcUserBases_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::NewProp__pcUserBases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "SetUsers", nullptr, nullptr, sizeof(EOSNatP2PCachedTransfer_eventSetUsers_Parms), Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Update_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer, nullptr, "Update", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister()
	{
		return UEOSNatP2PCachedTransfer::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReceivedDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTransferEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CachedTransferEventDispatcher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cUsers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cUsers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcReceiveBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcReceiveBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcNatP2P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcNatP2P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcCommnuityBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcCommnuityBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSLockebleCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_AddUser, "AddUser" }, // 3527923000
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ClearPacketQueue, "ClearPacketQueue" }, // 344662952
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_ContainsUser, "ContainsUser" }, // 1083749189
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetChannel, "GetChannel" }, // 470756086
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetSocketID, "GetSocketID" }, // 386300426
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_GetStringOfOwnerProductUserID, "GetStringOfOwnerProductUserID" }, // 1603183274
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_IsSameSocketID, "IsSameSocketID" }, // 2264645834
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_OnReceive, "OnReceive" }, // 8298264
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveAllUsers, "RemoveAllUsers" }, // 2293064499
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_RemoveUser, "RemoveUser" }, // 2859287211
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendArray, "SendArray" }, // 81779998
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendBinary, "SendBinary" }, // 3601372561
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendContentBinary, "SendContentBinary" }, // 842258090
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SendPacket, "SendPacket" }, // 237674982
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Setup, "Setup" }, // 3307078872
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_SetUsers, "SetUsers" }, // 3877709831
		{ &Z_Construct_UFunction_UEOSNatP2PCachedTransfer_Update, "Update" }, // 3741775276
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSNatP2PCachedTransfer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_ReceivedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PCachedTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_ReceivedDispatcher = { "ReceivedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PCachedTransfer, ReceivedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSCachedTransferReceivedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_ReceivedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_ReceivedDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_CachedTransferEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PCachedTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_CachedTransferEventDispatcher = { "CachedTransferEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PCachedTransfer, CachedTransferEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_OESNatP2PCachedTransferEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_CachedTransferEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_CachedTransferEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_cUsers_ValueProp = { "m_cUsers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_cUsers_Key_KeyProp = { "m_cUsers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_cUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PCachedTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_cUsers = { "m_cUsers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PCachedTransfer, m_cUsers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_cUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_cUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcReceiveBuffer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PCachedTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcReceiveBuffer = { "m_pcReceiveBuffer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PCachedTransfer, m_pcReceiveBuffer), Z_Construct_UClass_UEOSNatP2PReceiveBuffer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcReceiveBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcReceiveBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcNatP2P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PCachedTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcNatP2P = { "m_pcNatP2P", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PCachedTransfer, m_pcNatP2P), Z_Construct_UClass_UEOSNatP2P_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcNatP2P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcNatP2P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcCommnuityBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PCachedTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PCachedTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcCommnuityBase = { "m_pcCommnuityBase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PCachedTransfer, m_pcCommnuityBase), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcCommnuityBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcCommnuityBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_ReceivedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_CachedTransferEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_cUsers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_cUsers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_cUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcReceiveBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcNatP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::NewProp_m_pcCommnuityBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNatP2PCachedTransfer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::ClassParams = {
		&UEOSNatP2PCachedTransfer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNatP2PCachedTransfer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNatP2PCachedTransfer, 12955196);
	template<> YEOSSDK_API UClass* StaticClass<UEOSNatP2PCachedTransfer>()
	{
		return UEOSNatP2PCachedTransfer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNatP2PCachedTransfer(Z_Construct_UClass_UEOSNatP2PCachedTransfer, &UEOSNatP2PCachedTransfer::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSNatP2PCachedTransfer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNatP2PCachedTransfer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
