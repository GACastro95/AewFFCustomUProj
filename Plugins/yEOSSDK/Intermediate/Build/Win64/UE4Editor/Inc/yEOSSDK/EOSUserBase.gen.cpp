// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EExternalAccountType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNatP2PConnectionStatus();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSUserEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSUserBase::execCheckSendPacket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckSendPacket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execFindCustomData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->FindCustomData(Z_Param__strName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execGetAccountDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccountDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execGetEOSUserContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSUserContentsBase**)Z_Param__Result=P_THIS->GetEOSUserContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execGetEpicAccountDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEpicAccountDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execGetExternalAccountId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetExternalAccountId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execGetExternalDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetExternalDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execGetExternalPlatformType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EExternalAccountType*)Z_Param__Result=P_THIS->GetExternalPlatformType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execGetP2PConnectionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSNatP2PConnectionStatus*)Z_Param__Result=P_THIS->GetP2PConnectionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execHasExternalDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasExternalDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execIsSameExternalPlatformType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSameExternalPlatformType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execRequestGetInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execSetAccountDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strDispName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAccountDisplayName(Z_Param__strDispName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSUserInfoAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSUserBase::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execSetCustomData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strName);
		P_GET_OBJECT(UObject,Z_Param__pObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomData(Z_Param__strName,Z_Param__pObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execSetExternalAccountId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strExternalAccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalAccountId(Z_Param__strExternalAccountId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execSetExternalDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strExternalDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalDisplayName(Z_Param__strExternalDisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserBase::execSetExternalPlatformType)
	{
		P_GET_ENUM(EExternalAccountType,Z_Param__sExternalPlatformType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalPlatformType(EExternalAccountType(Z_Param__sExternalPlatformType));
		P_NATIVE_END;
	}
	void UEOSUserBase::StaticRegisterNativesUEOSUserBase()
	{
		UClass* Class = UEOSUserBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckSendPacket", &UEOSUserBase::execCheckSendPacket },
			{ "FindCustomData", &UEOSUserBase::execFindCustomData },
			{ "GetAccountDisplayName", &UEOSUserBase::execGetAccountDisplayName },
			{ "GetEOSUserContent", &UEOSUserBase::execGetEOSUserContent },
			{ "GetEpicAccountDisplayName", &UEOSUserBase::execGetEpicAccountDisplayName },
			{ "GetExternalAccountId", &UEOSUserBase::execGetExternalAccountId },
			{ "GetExternalDisplayName", &UEOSUserBase::execGetExternalDisplayName },
			{ "GetExternalPlatformType", &UEOSUserBase::execGetExternalPlatformType },
			{ "GetP2PConnectionState", &UEOSUserBase::execGetP2PConnectionState },
			{ "HasExternalDisplayName", &UEOSUserBase::execHasExternalDisplayName },
			{ "IsSameExternalPlatformType", &UEOSUserBase::execIsSameExternalPlatformType },
			{ "RequestGetInfo", &UEOSUserBase::execRequestGetInfo },
			{ "SetAccountDisplayName", &UEOSUserBase::execSetAccountDisplayName },
			{ "SetApiVersion", &UEOSUserBase::execSetApiVersion },
			{ "SetCustomData", &UEOSUserBase::execSetCustomData },
			{ "SetExternalAccountId", &UEOSUserBase::execSetExternalAccountId },
			{ "SetExternalDisplayName", &UEOSUserBase::execSetExternalDisplayName },
			{ "SetExternalPlatformType", &UEOSUserBase::execSetExternalPlatformType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics
	{
		struct EOSUserBase_eventCheckSendPacket_Parms
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
	void Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserBase_eventCheckSendPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserBase_eventCheckSendPacket_Parms), &Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "CheckSendPacket", nullptr, nullptr, sizeof(EOSUserBase_eventCheckSendPacket_Parms), Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_CheckSendPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_CheckSendPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics
	{
		struct EOSUserBase_eventFindCustomData_Parms
		{
			FString _strName;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::NewProp__strName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::NewProp__strName = { "_strName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventFindCustomData_Parms, _strName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::NewProp__strName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::NewProp__strName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventFindCustomData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::NewProp__strName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "FindCustomData", nullptr, nullptr, sizeof(EOSUserBase_eventFindCustomData_Parms), Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_FindCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_FindCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics
	{
		struct EOSUserBase_eventGetAccountDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventGetAccountDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "GetAccountDisplayName", nullptr, nullptr, sizeof(EOSUserBase_eventGetAccountDisplayName_Parms), Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics
	{
		struct EOSUserBase_eventGetEOSUserContent_Parms
		{
			UEOSUserContentsBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventGetEOSUserContent_Parms, ReturnValue), Z_Construct_UClass_UEOSUserContentsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "GetEOSUserContent", nullptr, nullptr, sizeof(EOSUserBase_eventGetEOSUserContent_Parms), Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics
	{
		struct EOSUserBase_eventGetEpicAccountDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventGetEpicAccountDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "GetEpicAccountDisplayName", nullptr, nullptr, sizeof(EOSUserBase_eventGetEpicAccountDisplayName_Parms), Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics
	{
		struct EOSUserBase_eventGetExternalAccountId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventGetExternalAccountId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "GetExternalAccountId", nullptr, nullptr, sizeof(EOSUserBase_eventGetExternalAccountId_Parms), Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics
	{
		struct EOSUserBase_eventGetExternalDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventGetExternalDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "GetExternalDisplayName", nullptr, nullptr, sizeof(EOSUserBase_eventGetExternalDisplayName_Parms), Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics
	{
		struct EOSUserBase_eventGetExternalPlatformType_Parms
		{
			EExternalAccountType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventGetExternalPlatformType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "GetExternalPlatformType", nullptr, nullptr, sizeof(EOSUserBase_eventGetExternalPlatformType_Parms), Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics
	{
		struct EOSUserBase_eventGetP2PConnectionState_Parms
		{
			EEOSNatP2PConnectionStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventGetP2PConnectionState_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSNatP2PConnectionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "GetP2PConnectionState", nullptr, nullptr, sizeof(EOSUserBase_eventGetP2PConnectionState_Parms), Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics
	{
		struct EOSUserBase_eventHasExternalDisplayName_Parms
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
	void Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserBase_eventHasExternalDisplayName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserBase_eventHasExternalDisplayName_Parms), &Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "HasExternalDisplayName", nullptr, nullptr, sizeof(EOSUserBase_eventHasExternalDisplayName_Parms), Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics
	{
		struct EOSUserBase_eventIsSameExternalPlatformType_Parms
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
	void Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserBase_eventIsSameExternalPlatformType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserBase_eventIsSameExternalPlatformType_Parms), &Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "IsSameExternalPlatformType", nullptr, nullptr, sizeof(EOSUserBase_eventIsSameExternalPlatformType_Parms), Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics
	{
		struct EOSUserBase_eventRequestGetInfo_Parms
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
	void Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserBase_eventRequestGetInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserBase_eventRequestGetInfo_Parms), &Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "RequestGetInfo", nullptr, nullptr, sizeof(EOSUserBase_eventRequestGetInfo_Parms), Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_RequestGetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_RequestGetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics
	{
		struct EOSUserBase_eventSetAccountDisplayName_Parms
		{
			FString _strDispName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strDispName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strDispName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::NewProp__strDispName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::NewProp__strDispName = { "_strDispName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventSetAccountDisplayName_Parms, _strDispName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::NewProp__strDispName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::NewProp__strDispName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::NewProp__strDispName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "SetAccountDisplayName", nullptr, nullptr, sizeof(EOSUserBase_eventSetAccountDisplayName_Parms), Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics
	{
		struct EOSUserBase_eventSetApiVersion_Parms
		{
			FEOSUserInfoAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSUserInfoAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSUserBase_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics
	{
		struct EOSUserBase_eventSetCustomData_Parms
		{
			FString _strName;
			UObject* _pObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::NewProp__strName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::NewProp__strName = { "_strName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventSetCustomData_Parms, _strName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::NewProp__strName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::NewProp__strName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::NewProp__pObject = { "_pObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventSetCustomData_Parms, _pObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::NewProp__strName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::NewProp__pObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "SetCustomData", nullptr, nullptr, sizeof(EOSUserBase_eventSetCustomData_Parms), Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_SetCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_SetCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics
	{
		struct EOSUserBase_eventSetExternalAccountId_Parms
		{
			FString _strExternalAccountId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strExternalAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strExternalAccountId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::NewProp__strExternalAccountId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::NewProp__strExternalAccountId = { "_strExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventSetExternalAccountId_Parms, _strExternalAccountId), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::NewProp__strExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::NewProp__strExternalAccountId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::NewProp__strExternalAccountId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "SetExternalAccountId", nullptr, nullptr, sizeof(EOSUserBase_eventSetExternalAccountId_Parms), Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics
	{
		struct EOSUserBase_eventSetExternalDisplayName_Parms
		{
			FString _strExternalDisplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strExternalDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strExternalDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::NewProp__strExternalDisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::NewProp__strExternalDisplayName = { "_strExternalDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventSetExternalDisplayName_Parms, _strExternalDisplayName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::NewProp__strExternalDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::NewProp__strExternalDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::NewProp__strExternalDisplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "SetExternalDisplayName", nullptr, nullptr, sizeof(EOSUserBase_eventSetExternalDisplayName_Parms), Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics
	{
		struct EOSUserBase_eventSetExternalPlatformType_Parms
		{
			EExternalAccountType _sExternalPlatformType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__sExternalPlatformType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__sExternalPlatformType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::NewProp__sExternalPlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::NewProp__sExternalPlatformType = { "_sExternalPlatformType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserBase_eventSetExternalPlatformType_Parms, _sExternalPlatformType), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::NewProp__sExternalPlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::NewProp__sExternalPlatformType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserBase, nullptr, "SetExternalPlatformType", nullptr, nullptr, sizeof(EOSUserBase_eventSetExternalPlatformType_Parms), Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSUserBase_NoRegister()
	{
		return UEOSUserBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSUserBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strExternalAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strExternalAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strExternalDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strExternalDisplayName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_sExternalPlatformType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sExternalPlatformType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_sExternalPlatformType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcContents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcContents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cCustomData_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cCustomData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cCustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cCustomData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSUserBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSUserBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSUserBase_CheckSendPacket, "CheckSendPacket" }, // 4282943377
		{ &Z_Construct_UFunction_UEOSUserBase_FindCustomData, "FindCustomData" }, // 1040152102
		{ &Z_Construct_UFunction_UEOSUserBase_GetAccountDisplayName, "GetAccountDisplayName" }, // 841066496
		{ &Z_Construct_UFunction_UEOSUserBase_GetEOSUserContent, "GetEOSUserContent" }, // 1284219900
		{ &Z_Construct_UFunction_UEOSUserBase_GetEpicAccountDisplayName, "GetEpicAccountDisplayName" }, // 912541065
		{ &Z_Construct_UFunction_UEOSUserBase_GetExternalAccountId, "GetExternalAccountId" }, // 3537166443
		{ &Z_Construct_UFunction_UEOSUserBase_GetExternalDisplayName, "GetExternalDisplayName" }, // 914069460
		{ &Z_Construct_UFunction_UEOSUserBase_GetExternalPlatformType, "GetExternalPlatformType" }, // 946115681
		{ &Z_Construct_UFunction_UEOSUserBase_GetP2PConnectionState, "GetP2PConnectionState" }, // 3665664683
		{ &Z_Construct_UFunction_UEOSUserBase_HasExternalDisplayName, "HasExternalDisplayName" }, // 3928509494
		{ &Z_Construct_UFunction_UEOSUserBase_IsSameExternalPlatformType, "IsSameExternalPlatformType" }, // 1742776143
		{ &Z_Construct_UFunction_UEOSUserBase_RequestGetInfo, "RequestGetInfo" }, // 376650157
		{ &Z_Construct_UFunction_UEOSUserBase_SetAccountDisplayName, "SetAccountDisplayName" }, // 2274541859
		{ &Z_Construct_UFunction_UEOSUserBase_SetApiVersion, "SetApiVersion" }, // 2103735512
		{ &Z_Construct_UFunction_UEOSUserBase_SetCustomData, "SetCustomData" }, // 692664891
		{ &Z_Construct_UFunction_UEOSUserBase_SetExternalAccountId, "SetExternalAccountId" }, // 2900549386
		{ &Z_Construct_UFunction_UEOSUserBase_SetExternalDisplayName, "SetExternalDisplayName" }, // 2176813792
		{ &Z_Construct_UFunction_UEOSUserBase_SetExternalPlatformType, "SetExternalPlatformType" }, // 3001348671
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSUserBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserBase_Statics::NewProp_UserEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserBase" },
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSUserBase_Statics::NewProp_UserEventDispatcher = { "UserEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserBase, UserEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSUserEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_UserEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_UserEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserBase" },
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strDisplayName = { "m_strDisplayName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserBase, m_strDisplayName), METADATA_PARAMS(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strExternalAccountId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserBase" },
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strExternalAccountId = { "m_strExternalAccountId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserBase, m_strExternalAccountId), METADATA_PARAMS(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strExternalAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strExternalDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserBase" },
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strExternalDisplayName = { "m_strExternalDisplayName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserBase, m_strExternalDisplayName), METADATA_PARAMS(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strExternalDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strExternalDisplayName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_sExternalPlatformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_sExternalPlatformType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserBase" },
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_sExternalPlatformType = { "m_sExternalPlatformType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserBase, m_sExternalPlatformType), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_sExternalPlatformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_sExternalPlatformType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_pcContents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserBase" },
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_pcContents = { "m_pcContents", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserBase, m_pcContents), Z_Construct_UClass_UEOSUserContentsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_pcContents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_pcContents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_cCustomData_ValueProp = { "m_cCustomData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_cCustomData_Key_KeyProp = { "m_cCustomData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_cCustomData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserBase" },
		{ "ModuleRelativePath", "Public/EOSUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_cCustomData = { "m_cCustomData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserBase, m_cCustomData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_cCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_cCustomData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSUserBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBase_Statics::NewProp_UserEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_strExternalDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_sExternalPlatformType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_sExternalPlatformType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_pcContents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_cCustomData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_cCustomData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserBase_Statics::NewProp_m_cCustomData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSUserBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSUserBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSUserBase_Statics::ClassParams = {
		&UEOSUserBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSUserBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSUserBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSUserBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSUserBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSUserBase, 1908940637);
	template<> YEOSSDK_API UClass* StaticClass<UEOSUserBase>()
	{
		return UEOSUserBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSUserBase(Z_Construct_UClass_UEOSUserBase, &UEOSUserBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSUserBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSUserBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
