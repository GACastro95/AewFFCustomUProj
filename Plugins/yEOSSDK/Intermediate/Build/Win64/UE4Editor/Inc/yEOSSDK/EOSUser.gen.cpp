// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUser() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUser_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUser();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriend_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresenceBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAuthEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAuth_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus();
// End Cross Module References
	DEFINE_FUNCTION(UEOSUser::execGetEOSFriend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSFriend**)Z_Param__Result=P_THIS->GetEOSFriend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUser::execGetEOSPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSPresenceBase**)Z_Param__Result=P_THIS->GetEOSPresence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUser::execGetPresenceCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetPresenceCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUser::execOnEOSAuthEvent)
	{
		P_GET_ENUM(EEOSAuthEvent,Z_Param__enEvent);
		P_GET_OBJECT(UEOSAuth,Z_Param__pcAuth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEOSAuthEvent(EEOSAuthEvent(Z_Param__enEvent),Z_Param__pcAuth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUser::execRequestContentsList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestContentsList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUser::execRequestDeletePresenceData)
	{
		P_GET_TARRAY(FString,Z_Param__cArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDeletePresenceData(Z_Param__cArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUser::execRequestGetFriends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetFriends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUser::execRequestGetPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetPresence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUser::execRequestSetPresence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRichText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetPresence(Z_Param__strRichText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUser::execRequestSetPresenceData)
	{
		P_GET_TMAP(FString,FString,Z_Param__cMapData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetPresenceData(Z_Param__cMapData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUser::execRequestSetPresenceStatus)
	{
		P_GET_ENUM(EEOSPresenceStatus,Z_Param__enStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetPresenceStatus(EEOSPresenceStatus(Z_Param__enStatus));
		P_NATIVE_END;
	}
	void UEOSUser::StaticRegisterNativesUEOSUser()
	{
		UClass* Class = UEOSUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEOSFriend", &UEOSUser::execGetEOSFriend },
			{ "GetEOSPresence", &UEOSUser::execGetEOSPresence },
			{ "GetPresenceCache", &UEOSUser::execGetPresenceCache },
			{ "OnEOSAuthEvent", &UEOSUser::execOnEOSAuthEvent },
			{ "RequestContentsList", &UEOSUser::execRequestContentsList },
			{ "RequestDeletePresenceData", &UEOSUser::execRequestDeletePresenceData },
			{ "RequestGetFriends", &UEOSUser::execRequestGetFriends },
			{ "RequestGetPresence", &UEOSUser::execRequestGetPresence },
			{ "RequestSetPresence", &UEOSUser::execRequestSetPresence },
			{ "RequestSetPresenceData", &UEOSUser::execRequestSetPresenceData },
			{ "RequestSetPresenceStatus", &UEOSUser::execRequestSetPresenceStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics
	{
		struct EOSUser_eventGetEOSFriend_Parms
		{
			UEOSFriend* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUser_eventGetEOSFriend_Parms, ReturnValue), Z_Construct_UClass_UEOSFriend_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "GetEOSFriend", nullptr, nullptr, sizeof(EOSUser_eventGetEOSFriend_Parms), Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_GetEOSFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_GetEOSFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics
	{
		struct EOSUser_eventGetEOSPresence_Parms
		{
			UEOSPresenceBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUser_eventGetEOSPresence_Parms, ReturnValue), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "GetEOSPresence", nullptr, nullptr, sizeof(EOSUser_eventGetEOSPresence_Parms), Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_GetEOSPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_GetEOSPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics
	{
		struct EOSUser_eventGetPresenceCache_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUser_eventGetPresenceCache_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "GetPresenceCache", nullptr, nullptr, sizeof(EOSUser_eventGetPresenceCache_Parms), Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_GetPresenceCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_GetPresenceCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics
	{
		struct EOSUser_eventOnEOSAuthEvent_Parms
		{
			EEOSAuthEvent _enEvent;
			UEOSAuth* _pcAuth;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcAuth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::NewProp__enEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::NewProp__enEvent = { "_enEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUser_eventOnEOSAuthEvent_Parms, _enEvent), Z_Construct_UEnum_yEOSSDK_EEOSAuthEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::NewProp__pcAuth = { "_pcAuth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUser_eventOnEOSAuthEvent_Parms, _pcAuth), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::NewProp__enEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::NewProp__enEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::NewProp__pcAuth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "OnEOSAuthEvent", nullptr, nullptr, sizeof(EOSUser_eventOnEOSAuthEvent_Parms), Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics
	{
		struct EOSUser_eventRequestContentsList_Parms
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
	void Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUser_eventRequestContentsList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUser_eventRequestContentsList_Parms), &Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "RequestContentsList", nullptr, nullptr, sizeof(EOSUser_eventRequestContentsList_Parms), Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_RequestContentsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_RequestContentsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics
	{
		struct EOSUser_eventRequestDeletePresenceData_Parms
		{
			TArray<FString> _cArrayData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cArrayData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cArrayData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::NewProp__cArrayData_Inner = { "_cArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::NewProp__cArrayData = { "_cArrayData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUser_eventRequestDeletePresenceData_Parms, _cArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUser_eventRequestDeletePresenceData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUser_eventRequestDeletePresenceData_Parms), &Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::NewProp__cArrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::NewProp__cArrayData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "RequestDeletePresenceData", nullptr, nullptr, sizeof(EOSUser_eventRequestDeletePresenceData_Parms), Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics
	{
		struct EOSUser_eventRequestGetFriends_Parms
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
	void Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUser_eventRequestGetFriends_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUser_eventRequestGetFriends_Parms), &Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "RequestGetFriends", nullptr, nullptr, sizeof(EOSUser_eventRequestGetFriends_Parms), Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_RequestGetFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_RequestGetFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics
	{
		struct EOSUser_eventRequestGetPresence_Parms
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
	void Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUser_eventRequestGetPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUser_eventRequestGetPresence_Parms), &Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "RequestGetPresence", nullptr, nullptr, sizeof(EOSUser_eventRequestGetPresence_Parms), Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_RequestGetPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_RequestGetPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics
	{
		struct EOSUser_eventRequestSetPresence_Parms
		{
			FString _strRichText;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRichText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRichText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::NewProp__strRichText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::NewProp__strRichText = { "_strRichText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUser_eventRequestSetPresence_Parms, _strRichText), METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::NewProp__strRichText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::NewProp__strRichText_MetaData)) };
	void Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUser_eventRequestSetPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUser_eventRequestSetPresence_Parms), &Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::NewProp__strRichText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "RequestSetPresence", nullptr, nullptr, sizeof(EOSUser_eventRequestSetPresence_Parms), Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_RequestSetPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_RequestSetPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics
	{
		struct EOSUser_eventRequestSetPresenceData_Parms
		{
			TMap<FString,FString> _cMapData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cMapData_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cMapData_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__cMapData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::NewProp__cMapData_ValueProp = { "_cMapData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::NewProp__cMapData_Key_KeyProp = { "_cMapData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::NewProp__cMapData = { "_cMapData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUser_eventRequestSetPresenceData_Parms, _cMapData), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUser_eventRequestSetPresenceData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUser_eventRequestSetPresenceData_Parms), &Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::NewProp__cMapData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::NewProp__cMapData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::NewProp__cMapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "RequestSetPresenceData", nullptr, nullptr, sizeof(EOSUser_eventRequestSetPresenceData_Parms), Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_RequestSetPresenceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_RequestSetPresenceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics
	{
		struct EOSUser_eventRequestSetPresenceStatus_Parms
		{
			EEOSPresenceStatus _enStatus;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enStatus;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::NewProp__enStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::NewProp__enStatus = { "_enStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUser_eventRequestSetPresenceStatus_Parms, _enStatus), Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUser_eventRequestSetPresenceStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUser_eventRequestSetPresenceStatus_Parms), &Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::NewProp__enStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::NewProp__enStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUser, nullptr, "RequestSetPresenceStatus", nullptr, nullptr, sizeof(EOSUser_eventRequestSetPresenceStatus_Parms), Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSUser_NoRegister()
	{
		return UEOSUser::StaticClass();
	}
	struct Z_Construct_UClass_UEOSUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcFriends_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcFriends;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPresence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPresence;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cPresenceDataCache_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cPresenceDataCache_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cPresenceDataCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cPresenceDataCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSUserBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSUser_GetEOSFriend, "GetEOSFriend" }, // 2275612819
		{ &Z_Construct_UFunction_UEOSUser_GetEOSPresence, "GetEOSPresence" }, // 3145613612
		{ &Z_Construct_UFunction_UEOSUser_GetPresenceCache, "GetPresenceCache" }, // 1857861252
		{ &Z_Construct_UFunction_UEOSUser_OnEOSAuthEvent, "OnEOSAuthEvent" }, // 874928887
		{ &Z_Construct_UFunction_UEOSUser_RequestContentsList, "RequestContentsList" }, // 3446454303
		{ &Z_Construct_UFunction_UEOSUser_RequestDeletePresenceData, "RequestDeletePresenceData" }, // 3007115559
		{ &Z_Construct_UFunction_UEOSUser_RequestGetFriends, "RequestGetFriends" }, // 1110937251
		{ &Z_Construct_UFunction_UEOSUser_RequestGetPresence, "RequestGetPresence" }, // 1288786076
		{ &Z_Construct_UFunction_UEOSUser_RequestSetPresence, "RequestSetPresence" }, // 205013329
		{ &Z_Construct_UFunction_UEOSUser_RequestSetPresenceData, "RequestSetPresenceData" }, // 2727975826
		{ &Z_Construct_UFunction_UEOSUser_RequestSetPresenceStatus, "RequestSetPresenceStatus" }, // 3685489433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUser_Statics::NewProp_m_pcFriends_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUser" },
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSUser_Statics::NewProp_m_pcFriends = { "m_pcFriends", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUser, m_pcFriends), Z_Construct_UClass_UEOSFriend_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSUser_Statics::NewProp_m_pcFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUser_Statics::NewProp_m_pcFriends_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUser_Statics::NewProp_m_pcPresence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUser" },
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSUser_Statics::NewProp_m_pcPresence = { "m_pcPresence", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUser, m_pcPresence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSUser_Statics::NewProp_m_pcPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUser_Statics::NewProp_m_pcPresence_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSUser_Statics::NewProp_m_cPresenceDataCache_ValueProp = { "m_cPresenceDataCache", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSUser_Statics::NewProp_m_cPresenceDataCache_Key_KeyProp = { "m_cPresenceDataCache_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUser_Statics::NewProp_m_cPresenceDataCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUser" },
		{ "ModuleRelativePath", "Public/EOSUser.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSUser_Statics::NewProp_m_cPresenceDataCache = { "m_cPresenceDataCache", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUser, m_cPresenceDataCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSUser_Statics::NewProp_m_cPresenceDataCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUser_Statics::NewProp_m_cPresenceDataCache_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUser_Statics::NewProp_m_pcFriends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUser_Statics::NewProp_m_pcPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUser_Statics::NewProp_m_cPresenceDataCache_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUser_Statics::NewProp_m_cPresenceDataCache_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUser_Statics::NewProp_m_cPresenceDataCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSUser_Statics::ClassParams = {
		&UEOSUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSUser, 2258072325);
	template<> YEOSSDK_API UClass* StaticClass<UEOSUser>()
	{
		return UEOSUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSUser(Z_Construct_UClass_UEOSUser, &UEOSUser::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
