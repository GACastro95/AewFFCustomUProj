// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PSynchronizedPacketBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PSynchronizedPacketBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncState();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncProcType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTransfterState();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execCompare)
	{
		P_GET_OBJECT(UEOSSessionP2PSynchronizedPacketBase,Z_Param__pstPacketBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Compare(Z_Param__pstPacketBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execGetPacketSyncState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionPacketSyncState*)Z_Param__Result=P_THIS->GetPacketSyncState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execGetSyncProcType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionPacketSyncProcType*)Z_Param__Result=P_THIS->GetSyncProcType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execGetTransferState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionPacketTransfterState*)Z_Param__Result=P_THIS->GetTransferState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execIsNeedToMigrateWhenHostMigration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNeedToMigrateWhenHostMigration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execIsNeedToSendByClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNeedToSendByClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execIsNeedToSendByHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNeedToSendByHost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execIsReply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execRequestForResult)
	{
		P_GET_UBOOL(Z_Param__bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestForResult(Z_Param__bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execResetRetry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetRetry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execRetry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Retry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execSendForHostMigration)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__uPacketIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendForHostMigration(Z_Param__uPacketIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execSetMaxFrameCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sMaxFrameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxFrameCount(Z_Param__sMaxFrameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execSetMaxRetryCount)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__uMaxRetryCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxRetryCount(Z_Param__uMaxRetryCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PSynchronizedPacketBase::execUpdateFrameCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateFrameCount();
		P_NATIVE_END;
	}
	void UEOSSessionP2PSynchronizedPacketBase::StaticRegisterNativesUEOSSessionP2PSynchronizedPacketBase()
	{
		UClass* Class = UEOSSessionP2PSynchronizedPacketBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Compare", &UEOSSessionP2PSynchronizedPacketBase::execCompare },
			{ "GetPacketSyncState", &UEOSSessionP2PSynchronizedPacketBase::execGetPacketSyncState },
			{ "GetSyncProcType", &UEOSSessionP2PSynchronizedPacketBase::execGetSyncProcType },
			{ "GetTransferState", &UEOSSessionP2PSynchronizedPacketBase::execGetTransferState },
			{ "IsNeedToMigrateWhenHostMigration", &UEOSSessionP2PSynchronizedPacketBase::execIsNeedToMigrateWhenHostMigration },
			{ "IsNeedToSendByClient", &UEOSSessionP2PSynchronizedPacketBase::execIsNeedToSendByClient },
			{ "IsNeedToSendByHost", &UEOSSessionP2PSynchronizedPacketBase::execIsNeedToSendByHost },
			{ "IsReply", &UEOSSessionP2PSynchronizedPacketBase::execIsReply },
			{ "RequestForResult", &UEOSSessionP2PSynchronizedPacketBase::execRequestForResult },
			{ "ResetRetry", &UEOSSessionP2PSynchronizedPacketBase::execResetRetry },
			{ "Retry", &UEOSSessionP2PSynchronizedPacketBase::execRetry },
			{ "SendForHostMigration", &UEOSSessionP2PSynchronizedPacketBase::execSendForHostMigration },
			{ "SetMaxFrameCount", &UEOSSessionP2PSynchronizedPacketBase::execSetMaxFrameCount },
			{ "SetMaxRetryCount", &UEOSSessionP2PSynchronizedPacketBase::execSetMaxRetryCount },
			{ "UpdateFrameCount", &UEOSSessionP2PSynchronizedPacketBase::execUpdateFrameCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventCompare_Parms
		{
			UEOSSessionP2PSynchronizedPacketBase* _pstPacketBase;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pstPacketBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::NewProp__pstPacketBase = { "_pstPacketBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PSynchronizedPacketBase_eventCompare_Parms, _pstPacketBase), Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventCompare_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventCompare_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::NewProp__pstPacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "Compare", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventCompare_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventGetPacketSyncState_Parms
		{
			EEOSSessionPacketSyncState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PSynchronizedPacketBase_eventGetPacketSyncState_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "GetPacketSyncState", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventGetPacketSyncState_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventGetSyncProcType_Parms
		{
			EEOSSessionPacketSyncProcType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PSynchronizedPacketBase_eventGetSyncProcType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketSyncProcType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "GetSyncProcType", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventGetSyncProcType_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventGetTransferState_Parms
		{
			EEOSSessionPacketTransfterState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PSynchronizedPacketBase_eventGetTransferState_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTransfterState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "GetTransferState", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventGetTransferState_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventIsNeedToMigrateWhenHostMigration_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventIsNeedToMigrateWhenHostMigration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventIsNeedToMigrateWhenHostMigration_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "IsNeedToMigrateWhenHostMigration", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventIsNeedToMigrateWhenHostMigration_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventIsNeedToSendByClient_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventIsNeedToSendByClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventIsNeedToSendByClient_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "IsNeedToSendByClient", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventIsNeedToSendByClient_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventIsNeedToSendByHost_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventIsNeedToSendByHost_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventIsNeedToSendByHost_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "IsNeedToSendByHost", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventIsNeedToSendByHost_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventIsReply_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventIsReply_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventIsReply_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "IsReply", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventIsReply_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventRequestForResult_Parms
		{
			bool _bSuccess;
			bool ReturnValue;
		};
		static void NewProp__bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bSuccess;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::NewProp__bSuccess_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventRequestForResult_Parms*)Obj)->_bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::NewProp__bSuccess = { "_bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventRequestForResult_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::NewProp__bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventRequestForResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventRequestForResult_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::NewProp__bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "RequestForResult", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventRequestForResult_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventResetRetry_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventResetRetry_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventResetRetry_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "ResetRetry", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventResetRetry_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventRetry_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventRetry_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventRetry_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "Retry", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventRetry_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventSendForHostMigration_Parms
		{
			int32 _uPacketIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__uPacketIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::NewProp__uPacketIndex = { "_uPacketIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PSynchronizedPacketBase_eventSendForHostMigration_Parms, _uPacketIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventSendForHostMigration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventSendForHostMigration_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::NewProp__uPacketIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "SendForHostMigration", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventSendForHostMigration_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventSetMaxFrameCount_Parms
		{
			int32 _sMaxFrameCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMaxFrameCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics::NewProp__sMaxFrameCount = { "_sMaxFrameCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PSynchronizedPacketBase_eventSetMaxFrameCount_Parms, _sMaxFrameCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics::NewProp__sMaxFrameCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "SetMaxFrameCount", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventSetMaxFrameCount_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventSetMaxRetryCount_Parms
		{
			uint8 _uMaxRetryCount;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uMaxRetryCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics::NewProp__uMaxRetryCount = { "_uMaxRetryCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PSynchronizedPacketBase_eventSetMaxRetryCount_Parms, _uMaxRetryCount), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics::NewProp__uMaxRetryCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "SetMaxRetryCount", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventSetMaxRetryCount_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics
	{
		struct EOSSessionP2PSynchronizedPacketBase_eventUpdateFrameCount_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PSynchronizedPacketBase_eventUpdateFrameCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PSynchronizedPacketBase_eventUpdateFrameCount_Parms), &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, nullptr, "UpdateFrameCount", nullptr, nullptr, sizeof(EOSSessionP2PSynchronizedPacketBase_eventUpdateFrameCount_Parms), Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister()
	{
		return UEOSSessionP2PSynchronizedPacketBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Compare, "Compare" }, // 2260107616
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetPacketSyncState, "GetPacketSyncState" }, // 2176599133
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetSyncProcType, "GetSyncProcType" }, // 4180898181
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_GetTransferState, "GetTransferState" }, // 2801452231
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToMigrateWhenHostMigration, "IsNeedToMigrateWhenHostMigration" }, // 2656332670
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByClient, "IsNeedToSendByClient" }, // 298876871
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsNeedToSendByHost, "IsNeedToSendByHost" }, // 219818217
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_IsReply, "IsReply" }, // 3711662446
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_RequestForResult, "RequestForResult" }, // 4044863353
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_ResetRetry, "ResetRetry" }, // 454240601
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_Retry, "Retry" }, // 1343644181
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SendForHostMigration, "SendForHostMigration" }, // 2660758511
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxFrameCount, "SetMaxFrameCount" }, // 628735682
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_SetMaxRetryCount, "SetMaxRetryCount" }, // 531863845
		{ &Z_Construct_UFunction_UEOSSessionP2PSynchronizedPacketBase_UpdateFrameCount, "UpdateFrameCount" }, // 1284756210
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PSynchronizedPacketBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PSynchronizedPacketBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PSynchronizedPacketBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics::ClassParams = {
		&UEOSSessionP2PSynchronizedPacketBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PSynchronizedPacketBase, 3857638359);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PSynchronizedPacketBase>()
	{
		return UEOSSessionP2PSynchronizedPacketBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PSynchronizedPacketBase(Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase, &UEOSSessionP2PSynchronizedPacketBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PSynchronizedPacketBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PSynchronizedPacketBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
