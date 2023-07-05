// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PPacketBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PPacketBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PPacketBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSNatP2PPacketBase::execGetSocketID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSocketID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PPacketBase::execGetUserBase)
	{
		P_GET_OBJECT_REF(UEOSUserBase,Z_Param_Out__pcUserBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserBase(Z_Param_Out__pcUserBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PPacketBase::execIsNoTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNoTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PPacketBase::execIsSameSocketID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSameSocketID(Z_Param__strSocketID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PPacketBase::execSend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Send();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PPacketBase::execSendAllUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendAllUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PPacketBase::execSetup)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSocketID);
		P_GET_PROPERTY(FByteProperty,Z_Param__uChannel);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__Reliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param__pcUserBase,Z_Param__strSocketID,Z_Param__uChannel,EEOSPacketReliability(Z_Param__Reliability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PPacketBase::execSetupByCachedTransfer)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUserBase);
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param__pcCachedTransfer);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__Reliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupByCachedTransfer(Z_Param__pcUserBase,Z_Param__pcCachedTransfer,EEOSPacketReliability(Z_Param__Reliability));
		P_NATIVE_END;
	}
	void UEOSNatP2PPacketBase::StaticRegisterNativesUEOSNatP2PPacketBase()
	{
		UClass* Class = UEOSNatP2PPacketBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSocketID", &UEOSNatP2PPacketBase::execGetSocketID },
			{ "GetUserBase", &UEOSNatP2PPacketBase::execGetUserBase },
			{ "IsNoTarget", &UEOSNatP2PPacketBase::execIsNoTarget },
			{ "IsSameSocketID", &UEOSNatP2PPacketBase::execIsSameSocketID },
			{ "Send", &UEOSNatP2PPacketBase::execSend },
			{ "SendAllUser", &UEOSNatP2PPacketBase::execSendAllUser },
			{ "Setup", &UEOSNatP2PPacketBase::execSetup },
			{ "SetupByCachedTransfer", &UEOSNatP2PPacketBase::execSetupByCachedTransfer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics
	{
		struct EOSNatP2PPacketBase_eventGetSocketID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PPacketBase_eventGetSocketID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PPacketBase, nullptr, "GetSocketID", nullptr, nullptr, sizeof(EOSNatP2PPacketBase_eventGetSocketID_Parms), Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics
	{
		struct EOSNatP2PPacketBase_eventGetUserBase_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PPacketBase_eventGetUserBase_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PPacketBase_eventGetUserBase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PPacketBase_eventGetUserBase_Parms), &Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PPacketBase, nullptr, "GetUserBase", nullptr, nullptr, sizeof(EOSNatP2PPacketBase_eventGetUserBase_Parms), Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics
	{
		struct EOSNatP2PPacketBase_eventIsNoTarget_Parms
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
	void Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PPacketBase_eventIsNoTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PPacketBase_eventIsNoTarget_Parms), &Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PPacketBase, nullptr, "IsNoTarget", nullptr, nullptr, sizeof(EOSNatP2PPacketBase_eventIsNoTarget_Parms), Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics
	{
		struct EOSNatP2PPacketBase_eventIsSameSocketID_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PPacketBase_eventIsSameSocketID_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::NewProp__strSocketID_MetaData)) };
	void Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PPacketBase_eventIsSameSocketID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PPacketBase_eventIsSameSocketID_Parms), &Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PPacketBase, nullptr, "IsSameSocketID", nullptr, nullptr, sizeof(EOSNatP2PPacketBase_eventIsSameSocketID_Parms), Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics
	{
		struct EOSNatP2PPacketBase_eventSend_Parms
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
	void Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PPacketBase_eventSend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PPacketBase_eventSend_Parms), &Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PPacketBase, nullptr, "Send", nullptr, nullptr, sizeof(EOSNatP2PPacketBase_eventSend_Parms), Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PPacketBase_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PPacketBase_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics
	{
		struct EOSNatP2PPacketBase_eventSendAllUser_Parms
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
	void Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PPacketBase_eventSendAllUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PPacketBase_eventSendAllUser_Parms), &Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PPacketBase, nullptr, "SendAllUser", nullptr, nullptr, sizeof(EOSNatP2PPacketBase_eventSendAllUser_Parms), Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics
	{
		struct EOSNatP2PPacketBase_eventSetup_Parms
		{
			UEOSUserBase* _pcUserBase;
			FString _strSocketID;
			uint8 _uChannel;
			EEOSPacketReliability _Reliability;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSocketID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Reliability_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Reliability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PPacketBase_eventSetup_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__strSocketID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__strSocketID = { "_strSocketID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PPacketBase_eventSetup_Parms, _strSocketID), METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__strSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__strSocketID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__uChannel = { "_uChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PPacketBase_eventSetup_Parms, _uChannel), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__Reliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__Reliability = { "_Reliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PPacketBase_eventSetup_Parms, _Reliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PPacketBase_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PPacketBase_eventSetup_Parms), &Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__strSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__uChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__Reliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp__Reliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PPacketBase, nullptr, "Setup", nullptr, nullptr, sizeof(EOSNatP2PPacketBase_eventSetup_Parms), Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics
	{
		struct EOSNatP2PPacketBase_eventSetupByCachedTransfer_Parms
		{
			UEOSUserBase* _pcUserBase;
			UEOSNatP2PCachedTransfer* _pcCachedTransfer;
			EEOSPacketReliability _Reliability;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserBase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCachedTransfer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Reliability_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Reliability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp__pcUserBase = { "_pcUserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PPacketBase_eventSetupByCachedTransfer_Parms, _pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp__pcCachedTransfer = { "_pcCachedTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PPacketBase_eventSetupByCachedTransfer_Parms, _pcCachedTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp__Reliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp__Reliability = { "_Reliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PPacketBase_eventSetupByCachedTransfer_Parms, _Reliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PPacketBase_eventSetupByCachedTransfer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PPacketBase_eventSetupByCachedTransfer_Parms), &Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp__pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp__pcCachedTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp__Reliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp__Reliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PPacketBase, nullptr, "SetupByCachedTransfer", nullptr, nullptr, sizeof(EOSNatP2PPacketBase_eventSetupByCachedTransfer_Parms), Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSNatP2PPacketBase_NoRegister()
	{
		return UEOSNatP2PPacketBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNatP2PPacketBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcUserBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcUserBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcCachedTransfer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcCachedTransfer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_Reliability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Reliability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_Reliability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSNatP2PBinary,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSNatP2PPacketBase_GetSocketID, "GetSocketID" }, // 4016413648
		{ &Z_Construct_UFunction_UEOSNatP2PPacketBase_GetUserBase, "GetUserBase" }, // 3512566962
		{ &Z_Construct_UFunction_UEOSNatP2PPacketBase_IsNoTarget, "IsNoTarget" }, // 3350538869
		{ &Z_Construct_UFunction_UEOSNatP2PPacketBase_IsSameSocketID, "IsSameSocketID" }, // 552586794
		{ &Z_Construct_UFunction_UEOSNatP2PPacketBase_Send, "Send" }, // 3937660900
		{ &Z_Construct_UFunction_UEOSNatP2PPacketBase_SendAllUser, "SendAllUser" }, // 1562881874
		{ &Z_Construct_UFunction_UEOSNatP2PPacketBase_Setup, "Setup" }, // 227167948
		{ &Z_Construct_UFunction_UEOSNatP2PPacketBase_SetupByCachedTransfer, "SetupByCachedTransfer" }, // 842015500
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSNatP2PPacketBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_pcUserBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PPacketBase" },
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_pcUserBase = { "m_pcUserBase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PPacketBase, m_pcUserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_pcUserBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_pcUserBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_pcCachedTransfer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PPacketBase" },
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_pcCachedTransfer = { "m_pcCachedTransfer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PPacketBase, m_pcCachedTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_pcCachedTransfer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_pcCachedTransfer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_Reliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_Reliability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PPacketBase" },
		{ "ModuleRelativePath", "Public/EOSNatP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_Reliability = { "m_Reliability", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PPacketBase, m_Reliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_Reliability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_Reliability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_pcUserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_pcCachedTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_Reliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::NewProp_m_Reliability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNatP2PPacketBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::ClassParams = {
		&UEOSNatP2PPacketBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNatP2PPacketBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNatP2PPacketBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNatP2PPacketBase, 3849983753);
	template<> YEOSSDK_API UClass* StaticClass<UEOSNatP2PPacketBase>()
	{
		return UEOSNatP2PPacketBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNatP2PPacketBase(Z_Construct_UClass_UEOSNatP2PPacketBase, &UEOSNatP2PPacketBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSNatP2PPacketBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNatP2PPacketBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
