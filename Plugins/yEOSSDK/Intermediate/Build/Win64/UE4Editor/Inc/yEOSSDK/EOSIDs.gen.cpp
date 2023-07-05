// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSIDs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSIDs() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInstanceBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAuth_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserType();
// End Cross Module References
	DEFINE_FUNCTION(UEOSIDs::execGetEOSAuth)
	{
		P_GET_OBJECT_REF(UEOSAuth,Z_Param_Out__ppAuth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEOSAuth(Z_Param_Out__ppAuth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSIDs::execGetStringOfEpicAccountID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfEpicAccountID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSIDs::execGetStringOfLocalAccountID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfLocalAccountID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSIDs::execGetStringOfProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSIDs::execGetUserType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSUserType*)Z_Param__Result=P_THIS->GetUserType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSIDs::execSetIDs)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strEpicAccountID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strLocalAccountID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_ENUM(EEOSUserType,Z_Param__enUserType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetIDs(Z_Param__strEpicAccountID,Z_Param__strLocalAccountID,Z_Param__strProductUserID,EEOSUserType(Z_Param__enUserType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSIDs::execSetIDsWithAuth)
	{
		P_GET_OBJECT(UEOSAuth,Z_Param__pcAuth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetIDsWithAuth(Z_Param__pcAuth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSIDs::execSetIDsWithInst)
	{
		P_GET_OBJECT(UEOSIDs,Z_Param__pcEOSIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetIDsWithInst(Z_Param__pcEOSIDs);
		P_NATIVE_END;
	}
	void UEOSIDs::StaticRegisterNativesUEOSIDs()
	{
		UClass* Class = UEOSIDs::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEOSAuth", &UEOSIDs::execGetEOSAuth },
			{ "GetStringOfEpicAccountID", &UEOSIDs::execGetStringOfEpicAccountID },
			{ "GetStringOfLocalAccountID", &UEOSIDs::execGetStringOfLocalAccountID },
			{ "GetStringOfProductUserID", &UEOSIDs::execGetStringOfProductUserID },
			{ "GetUserType", &UEOSIDs::execGetUserType },
			{ "SetIDs", &UEOSIDs::execSetIDs },
			{ "SetIDsWithAuth", &UEOSIDs::execSetIDsWithAuth },
			{ "SetIDsWithInst", &UEOSIDs::execSetIDsWithInst },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics
	{
		struct EOSIDs_eventGetEOSAuth_Parms
		{
			UEOSAuth* _ppAuth;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ppAuth;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::NewProp__ppAuth = { "_ppAuth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventGetEOSAuth_Parms, _ppAuth), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSIDs_eventGetEOSAuth_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSIDs_eventGetEOSAuth_Parms), &Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::NewProp__ppAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSIDs, nullptr, "GetEOSAuth", nullptr, nullptr, sizeof(EOSIDs_eventGetEOSAuth_Parms), Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSIDs_GetEOSAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSIDs_GetEOSAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics
	{
		struct EOSIDs_eventGetStringOfEpicAccountID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventGetStringOfEpicAccountID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSIDs, nullptr, "GetStringOfEpicAccountID", nullptr, nullptr, sizeof(EOSIDs_eventGetStringOfEpicAccountID_Parms), Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics
	{
		struct EOSIDs_eventGetStringOfLocalAccountID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventGetStringOfLocalAccountID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSIDs, nullptr, "GetStringOfLocalAccountID", nullptr, nullptr, sizeof(EOSIDs_eventGetStringOfLocalAccountID_Parms), Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics
	{
		struct EOSIDs_eventGetStringOfProductUserID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventGetStringOfProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSIDs, nullptr, "GetStringOfProductUserID", nullptr, nullptr, sizeof(EOSIDs_eventGetStringOfProductUserID_Parms), Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSIDs_GetUserType_Statics
	{
		struct EOSIDs_eventGetUserType_Parms
		{
			EEOSUserType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventGetUserType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSUserType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSIDs, nullptr, "GetUserType", nullptr, nullptr, sizeof(EOSIDs_eventGetUserType_Parms), Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSIDs_GetUserType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSIDs_GetUserType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSIDs_SetIDs_Statics
	{
		struct EOSIDs_eventSetIDs_Parms
		{
			FString _strEpicAccountID;
			FString _strLocalAccountID;
			FString _strProductUserID;
			EEOSUserType _enUserType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEpicAccountID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strLocalAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strLocalAccountID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enUserType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enUserType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strEpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strEpicAccountID = { "_strEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventSetIDs_Parms, _strEpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strEpicAccountID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strLocalAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strLocalAccountID = { "_strLocalAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventSetIDs_Parms, _strLocalAccountID), METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strLocalAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strLocalAccountID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventSetIDs_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__enUserType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__enUserType = { "_enUserType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventSetIDs_Parms, _enUserType), Z_Construct_UEnum_yEOSSDK_EEOSUserType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSIDs_eventSetIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSIDs_eventSetIDs_Parms), &Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strEpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strLocalAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__enUserType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp__enUserType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSIDs, nullptr, "SetIDs", nullptr, nullptr, sizeof(EOSIDs_eventSetIDs_Parms), Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSIDs_SetIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSIDs_SetIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics
	{
		struct EOSIDs_eventSetIDsWithAuth_Parms
		{
			UEOSAuth* _pcAuth;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcAuth;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::NewProp__pcAuth = { "_pcAuth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventSetIDsWithAuth_Parms, _pcAuth), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSIDs_eventSetIDsWithAuth_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSIDs_eventSetIDsWithAuth_Parms), &Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::NewProp__pcAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSIDs, nullptr, "SetIDsWithAuth", nullptr, nullptr, sizeof(EOSIDs_eventSetIDsWithAuth_Parms), Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics
	{
		struct EOSIDs_eventSetIDsWithInst_Parms
		{
			UEOSIDs* _pcEOSIDs;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::NewProp__pcEOSIDs = { "_pcEOSIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSIDs_eventSetIDsWithInst_Parms, _pcEOSIDs), Z_Construct_UClass_UEOSIDs_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSIDs_eventSetIDsWithInst_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSIDs_eventSetIDsWithInst_Parms), &Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::NewProp__pcEOSIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSIDs, nullptr, "SetIDsWithInst", nullptr, nullptr, sizeof(EOSIDs_eventSetIDsWithInst_Parms), Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSIDs_SetIDsWithInst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSIDs_SetIDsWithInst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSIDs_NoRegister()
	{
		return UEOSIDs::StaticClass();
	}
	struct Z_Construct_UClass_UEOSIDs_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcAuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcRefAuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcRefAuth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSIDs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSInstanceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSIDs_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSIDs_GetEOSAuth, "GetEOSAuth" }, // 313321566
		{ &Z_Construct_UFunction_UEOSIDs_GetStringOfEpicAccountID, "GetStringOfEpicAccountID" }, // 3106366932
		{ &Z_Construct_UFunction_UEOSIDs_GetStringOfLocalAccountID, "GetStringOfLocalAccountID" }, // 320558779
		{ &Z_Construct_UFunction_UEOSIDs_GetStringOfProductUserID, "GetStringOfProductUserID" }, // 517169885
		{ &Z_Construct_UFunction_UEOSIDs_GetUserType, "GetUserType" }, // 2488105229
		{ &Z_Construct_UFunction_UEOSIDs_SetIDs, "SetIDs" }, // 3336753959
		{ &Z_Construct_UFunction_UEOSIDs_SetIDsWithAuth, "SetIDsWithAuth" }, // 883153967
		{ &Z_Construct_UFunction_UEOSIDs_SetIDsWithInst, "SetIDsWithInst" }, // 2064256517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSIDs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSIDs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSIDs_Statics::NewProp_m_pcAuth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSIDs" },
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSIDs_Statics::NewProp_m_pcAuth = { "m_pcAuth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSIDs, m_pcAuth), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSIDs_Statics::NewProp_m_pcAuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSIDs_Statics::NewProp_m_pcAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSIDs_Statics::NewProp_m_pcRefAuth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSIDs" },
		{ "ModuleRelativePath", "Public/EOSIDs.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSIDs_Statics::NewProp_m_pcRefAuth = { "m_pcRefAuth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSIDs, m_pcRefAuth), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSIDs_Statics::NewProp_m_pcRefAuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSIDs_Statics::NewProp_m_pcRefAuth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSIDs_Statics::NewProp_m_pcAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSIDs_Statics::NewProp_m_pcRefAuth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSIDs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSIDs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSIDs_Statics::ClassParams = {
		&UEOSIDs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSIDs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSIDs_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSIDs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSIDs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSIDs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSIDs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSIDs, 1108669546);
	template<> YEOSSDK_API UClass* StaticClass<UEOSIDs>()
	{
		return UEOSIDs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSIDs(Z_Construct_UClass_UEOSIDs, &UEOSIDs::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSIDs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSIDs);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
