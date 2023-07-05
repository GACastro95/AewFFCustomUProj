// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PConnectionPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PConnectionPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PConnectionPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PConnectionPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PConnectionPacket::execGetAccountDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccountDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PConnectionPacket::execGetEpicAccountID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEpicAccountID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PConnectionPacket::execGetProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PConnectionPacket::execGetSessionName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSessionName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PConnectionPacket::execIsNewJoinInUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNewJoinInUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PConnectionPacket::execSetParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strSessionName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strDisplayName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strEpicAccountID);
		P_GET_UBOOL(Z_Param__bNewJoinInUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParams(Z_Param__strSessionName,Z_Param__strDisplayName,Z_Param__strProductUserID,Z_Param__strEpicAccountID,Z_Param__bNewJoinInUser);
		P_NATIVE_END;
	}
	void UEOSSessionP2PConnectionPacket::StaticRegisterNativesUEOSSessionP2PConnectionPacket()
	{
		UClass* Class = UEOSSessionP2PConnectionPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccountDisplayName", &UEOSSessionP2PConnectionPacket::execGetAccountDisplayName },
			{ "GetEpicAccountID", &UEOSSessionP2PConnectionPacket::execGetEpicAccountID },
			{ "GetProductUserID", &UEOSSessionP2PConnectionPacket::execGetProductUserID },
			{ "GetSessionName", &UEOSSessionP2PConnectionPacket::execGetSessionName },
			{ "IsNewJoinInUser", &UEOSSessionP2PConnectionPacket::execIsNewJoinInUser },
			{ "SetParams", &UEOSSessionP2PConnectionPacket::execSetParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics
	{
		struct EOSSessionP2PConnectionPacket_eventGetAccountDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PConnectionPacket_eventGetAccountDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PConnectionPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PConnectionPacket, nullptr, "GetAccountDisplayName", nullptr, nullptr, sizeof(EOSSessionP2PConnectionPacket_eventGetAccountDisplayName_Parms), Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics
	{
		struct EOSSessionP2PConnectionPacket_eventGetEpicAccountID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PConnectionPacket_eventGetEpicAccountID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PConnectionPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PConnectionPacket, nullptr, "GetEpicAccountID", nullptr, nullptr, sizeof(EOSSessionP2PConnectionPacket_eventGetEpicAccountID_Parms), Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics
	{
		struct EOSSessionP2PConnectionPacket_eventGetProductUserID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PConnectionPacket_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PConnectionPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PConnectionPacket, nullptr, "GetProductUserID", nullptr, nullptr, sizeof(EOSSessionP2PConnectionPacket_eventGetProductUserID_Parms), Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics
	{
		struct EOSSessionP2PConnectionPacket_eventGetSessionName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PConnectionPacket_eventGetSessionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PConnectionPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PConnectionPacket, nullptr, "GetSessionName", nullptr, nullptr, sizeof(EOSSessionP2PConnectionPacket_eventGetSessionName_Parms), Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics
	{
		struct EOSSessionP2PConnectionPacket_eventIsNewJoinInUser_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PConnectionPacket_eventIsNewJoinInUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PConnectionPacket_eventIsNewJoinInUser_Parms), &Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PConnectionPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PConnectionPacket, nullptr, "IsNewJoinInUser", nullptr, nullptr, sizeof(EOSSessionP2PConnectionPacket_eventIsNewJoinInUser_Parms), Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics
	{
		struct EOSSessionP2PConnectionPacket_eventSetParams_Parms
		{
			FString _strSessionName;
			FString _strDisplayName;
			FString _strProductUserID;
			FString _strEpicAccountID;
			bool _bNewJoinInUser;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSessionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEpicAccountID;
		static void NewProp__bNewJoinInUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bNewJoinInUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strSessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strSessionName = { "_strSessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PConnectionPacket_eventSetParams_Parms, _strSessionName), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strSessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strSessionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strDisplayName = { "_strDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PConnectionPacket_eventSetParams_Parms, _strDisplayName), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PConnectionPacket_eventSetParams_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strEpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strEpicAccountID = { "_strEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PConnectionPacket_eventSetParams_Parms, _strEpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strEpicAccountID_MetaData)) };
	void Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__bNewJoinInUser_SetBit(void* Obj)
	{
		((EOSSessionP2PConnectionPacket_eventSetParams_Parms*)Obj)->_bNewJoinInUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__bNewJoinInUser = { "_bNewJoinInUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PConnectionPacket_eventSetParams_Parms), &Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__bNewJoinInUser_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strSessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__strEpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::NewProp__bNewJoinInUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PConnectionPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PConnectionPacket, nullptr, "SetParams", nullptr, nullptr, sizeof(EOSSessionP2PConnectionPacket_eventSetParams_Parms), Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PConnectionPacket_NoRegister()
	{
		return UEOSSessionP2PConnectionPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PConnectionPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PConnectionPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PConnectionPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetAccountDisplayName, "GetAccountDisplayName" }, // 1577274132
		{ &Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetEpicAccountID, "GetEpicAccountID" }, // 3442419721
		{ &Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetProductUserID, "GetProductUserID" }, // 754744090
		{ &Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_GetSessionName, "GetSessionName" }, // 3839513797
		{ &Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_IsNewJoinInUser, "IsNewJoinInUser" }, // 1195666447
		{ &Z_Construct_UFunction_UEOSSessionP2PConnectionPacket_SetParams, "SetParams" }, // 504877047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PConnectionPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PConnectionPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PConnectionPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PConnectionPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PConnectionPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PConnectionPacket_Statics::ClassParams = {
		&UEOSSessionP2PConnectionPacket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PConnectionPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PConnectionPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PConnectionPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PConnectionPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PConnectionPacket, 1867251061);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PConnectionPacket>()
	{
		return UEOSSessionP2PConnectionPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PConnectionPacket(Z_Construct_UClass_UEOSSessionP2PConnectionPacket, &UEOSSessionP2PConnectionPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PConnectionPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PConnectionPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
