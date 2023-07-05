// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSPresenceBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSPresenceBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresenceBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresenceBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSPresenceEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSPresenceBase::execGetJoinedInSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetJoinedInSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSPresenceBase::execGetPresenceStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSPresenceStatus*)Z_Param__Result=P_THIS->GetPresenceStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSPresenceBase::execGetRecords)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetRecords();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSPresenceBase::execGetRichText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRichText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSPresenceBase::execRequestGetPresence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRequestEpicAccountID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetPresence(Z_Param__strRequestEpicAccountID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSPresenceBase::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSPresenceAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSPresenceBase::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSPresenceBase::execSetupInternalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupInternalCallback();
		P_NATIVE_END;
	}
	void UEOSPresenceBase::StaticRegisterNativesUEOSPresenceBase()
	{
		UClass* Class = UEOSPresenceBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetJoinedInSession", &UEOSPresenceBase::execGetJoinedInSession },
			{ "GetPresenceStatus", &UEOSPresenceBase::execGetPresenceStatus },
			{ "GetRecords", &UEOSPresenceBase::execGetRecords },
			{ "GetRichText", &UEOSPresenceBase::execGetRichText },
			{ "RequestGetPresence", &UEOSPresenceBase::execRequestGetPresence },
			{ "SetApiVersion", &UEOSPresenceBase::execSetApiVersion },
			{ "SetupInternalCallback", &UEOSPresenceBase::execSetupInternalCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics
	{
		struct EOSPresenceBase_eventGetJoinedInSession_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresenceBase_eventGetJoinedInSession_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresenceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresenceBase, nullptr, "GetJoinedInSession", nullptr, nullptr, sizeof(EOSPresenceBase_eventGetJoinedInSession_Parms), Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics
	{
		struct EOSPresenceBase_eventGetPresenceStatus_Parms
		{
			EEOSPresenceStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresenceBase_eventGetPresenceStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresenceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresenceBase, nullptr, "GetPresenceStatus", nullptr, nullptr, sizeof(EOSPresenceBase_eventGetPresenceStatus_Parms), Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics
	{
		struct EOSPresenceBase_eventGetRecords_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresenceBase_eventGetRecords_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresenceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresenceBase, nullptr, "GetRecords", nullptr, nullptr, sizeof(EOSPresenceBase_eventGetRecords_Parms), Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresenceBase_GetRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresenceBase_GetRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics
	{
		struct EOSPresenceBase_eventGetRichText_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresenceBase_eventGetRichText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresenceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresenceBase, nullptr, "GetRichText", nullptr, nullptr, sizeof(EOSPresenceBase_eventGetRichText_Parms), Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresenceBase_GetRichText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresenceBase_GetRichText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics
	{
		struct EOSPresenceBase_eventRequestGetPresence_Parms
		{
			FString _strRequestEpicAccountID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRequestEpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRequestEpicAccountID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::NewProp__strRequestEpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::NewProp__strRequestEpicAccountID = { "_strRequestEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresenceBase_eventRequestGetPresence_Parms, _strRequestEpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::NewProp__strRequestEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::NewProp__strRequestEpicAccountID_MetaData)) };
	void Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSPresenceBase_eventRequestGetPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSPresenceBase_eventRequestGetPresence_Parms), &Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::NewProp__strRequestEpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresenceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresenceBase, nullptr, "RequestGetPresence", nullptr, nullptr, sizeof(EOSPresenceBase_eventRequestGetPresence_Parms), Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics
	{
		struct EOSPresenceBase_eventSetApiVersion_Parms
		{
			FEOSPresenceAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSPresenceBase_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSPresenceAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresenceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresenceBase, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSPresenceBase_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics
	{
		struct EOSPresenceBase_eventSetupInternalCallback_Parms
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
	void Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSPresenceBase_eventSetupInternalCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSPresenceBase_eventSetupInternalCallback_Parms), &Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSPresenceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSPresenceBase, nullptr, "SetupInternalCallback", nullptr, nullptr, sizeof(EOSPresenceBase_eventSetupInternalCallback_Parms), Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSPresenceBase_NoRegister()
	{
		return UEOSPresenceBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSPresenceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PresenceEventDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSPresenceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSPresenceBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSPresenceBase_GetJoinedInSession, "GetJoinedInSession" }, // 3475559145
		{ &Z_Construct_UFunction_UEOSPresenceBase_GetPresenceStatus, "GetPresenceStatus" }, // 2264678634
		{ &Z_Construct_UFunction_UEOSPresenceBase_GetRecords, "GetRecords" }, // 1398995067
		{ &Z_Construct_UFunction_UEOSPresenceBase_GetRichText, "GetRichText" }, // 208029017
		{ &Z_Construct_UFunction_UEOSPresenceBase_RequestGetPresence, "RequestGetPresence" }, // 3705232801
		{ &Z_Construct_UFunction_UEOSPresenceBase_SetApiVersion, "SetApiVersion" }, // 362935715
		{ &Z_Construct_UFunction_UEOSPresenceBase_SetupInternalCallback, "SetupInternalCallback" }, // 3281394459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSPresenceBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSPresenceBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSPresenceBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSPresenceBase_Statics::NewProp_PresenceEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSPresenceBase" },
		{ "ModuleRelativePath", "Public/EOSPresenceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSPresenceBase_Statics::NewProp_PresenceEventDispatcher = { "PresenceEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSPresenceBase, PresenceEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSPresenceEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSPresenceBase_Statics::NewProp_PresenceEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSPresenceBase_Statics::NewProp_PresenceEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSPresenceBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSPresenceBase_Statics::NewProp_PresenceEventDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSPresenceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSPresenceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSPresenceBase_Statics::ClassParams = {
		&UEOSPresenceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSPresenceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSPresenceBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSPresenceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSPresenceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSPresenceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSPresenceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSPresenceBase, 3320655211);
	template<> YEOSSDK_API UClass* StaticClass<UEOSPresenceBase>()
	{
		return UEOSPresenceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSPresenceBase(Z_Construct_UClass_UEOSPresenceBase, &UEOSPresenceBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSPresenceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSPresenceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
