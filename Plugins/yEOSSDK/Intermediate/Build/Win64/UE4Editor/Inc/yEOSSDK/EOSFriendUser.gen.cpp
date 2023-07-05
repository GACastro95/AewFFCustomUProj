// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSFriendUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSFriendUser() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendUser_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendUser();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresenceBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSQueryStatus();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSFriendStatus();
// End Cross Module References
	DEFINE_FUNCTION(UEOSFriendUser::execGetEOSPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSPresenceBase**)Z_Param__Result=P_THIS->GetEOSPresence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriendUser::execGetExternalAccountIdQueryStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSQueryStatus*)Z_Param__Result=P_THIS->GetExternalAccountIdQueryStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriendUser::execGetFriendStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSFriendStatus*)Z_Param__Result=P_THIS->GetFriendStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriendUser::execGetStringOfFriendProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfFriendProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriendUser::execRequestGetPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetPresence();
		P_NATIVE_END;
	}
	void UEOSFriendUser::StaticRegisterNativesUEOSFriendUser()
	{
		UClass* Class = UEOSFriendUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEOSPresence", &UEOSFriendUser::execGetEOSPresence },
			{ "GetExternalAccountIdQueryStatus", &UEOSFriendUser::execGetExternalAccountIdQueryStatus },
			{ "GetFriendStatus", &UEOSFriendUser::execGetFriendStatus },
			{ "GetStringOfFriendProductUserID", &UEOSFriendUser::execGetStringOfFriendProductUserID },
			{ "RequestGetPresence", &UEOSFriendUser::execRequestGetPresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics
	{
		struct EOSFriendUser_eventGetEOSPresence_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriendUser_eventGetEOSPresence_Parms, ReturnValue), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriendUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriendUser, nullptr, "GetEOSPresence", nullptr, nullptr, sizeof(EOSFriendUser_eventGetEOSPresence_Parms), Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics
	{
		struct EOSFriendUser_eventGetExternalAccountIdQueryStatus_Parms
		{
			EEOSQueryStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriendUser_eventGetExternalAccountIdQueryStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSQueryStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriendUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriendUser, nullptr, "GetExternalAccountIdQueryStatus", nullptr, nullptr, sizeof(EOSFriendUser_eventGetExternalAccountIdQueryStatus_Parms), Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics
	{
		struct EOSFriendUser_eventGetFriendStatus_Parms
		{
			EEOSFriendStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriendUser_eventGetFriendStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSFriendStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriendUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriendUser, nullptr, "GetFriendStatus", nullptr, nullptr, sizeof(EOSFriendUser_eventGetFriendStatus_Parms), Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics
	{
		struct EOSFriendUser_eventGetStringOfFriendProductUserID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriendUser_eventGetStringOfFriendProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriendUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriendUser, nullptr, "GetStringOfFriendProductUserID", nullptr, nullptr, sizeof(EOSFriendUser_eventGetStringOfFriendProductUserID_Parms), Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics
	{
		struct EOSFriendUser_eventRequestGetPresence_Parms
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
	void Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFriendUser_eventRequestGetPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFriendUser_eventRequestGetPresence_Parms), &Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriendUser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriendUser, nullptr, "RequestGetPresence", nullptr, nullptr, sizeof(EOSFriendUser_eventRequestGetPresence_Parms), Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSFriendUser_NoRegister()
	{
		return UEOSFriendUser::StaticClass();
	}
	struct Z_Construct_UClass_UEOSFriendUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strFriendProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strFriendProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPresence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPresence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSFriendUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSUserBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSFriendUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSFriendUser_GetEOSPresence, "GetEOSPresence" }, // 253368575
		{ &Z_Construct_UFunction_UEOSFriendUser_GetExternalAccountIdQueryStatus, "GetExternalAccountIdQueryStatus" }, // 3778355466
		{ &Z_Construct_UFunction_UEOSFriendUser_GetFriendStatus, "GetFriendStatus" }, // 4278212538
		{ &Z_Construct_UFunction_UEOSFriendUser_GetStringOfFriendProductUserID, "GetStringOfFriendProductUserID" }, // 3107262375
		{ &Z_Construct_UFunction_UEOSFriendUser_RequestGetPresence, "RequestGetPresence" }, // 3880140009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriendUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSFriendUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSFriendUser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriendUser_Statics::NewProp_m_strFriendProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriendUser" },
		{ "ModuleRelativePath", "Public/EOSFriendUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSFriendUser_Statics::NewProp_m_strFriendProductUserID = { "m_strFriendProductUserID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSFriendUser, m_strFriendProductUserID), METADATA_PARAMS(Z_Construct_UClass_UEOSFriendUser_Statics::NewProp_m_strFriendProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriendUser_Statics::NewProp_m_strFriendProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriendUser_Statics::NewProp_m_pcPresence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriendUser" },
		{ "ModuleRelativePath", "Public/EOSFriendUser.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSFriendUser_Statics::NewProp_m_pcPresence = { "m_pcPresence", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSFriendUser, m_pcPresence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSFriendUser_Statics::NewProp_m_pcPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriendUser_Statics::NewProp_m_pcPresence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSFriendUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriendUser_Statics::NewProp_m_strFriendProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriendUser_Statics::NewProp_m_pcPresence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSFriendUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSFriendUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSFriendUser_Statics::ClassParams = {
		&UEOSFriendUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSFriendUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriendUser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSFriendUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriendUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSFriendUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSFriendUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSFriendUser, 2491679961);
	template<> YEOSSDK_API UClass* StaticClass<UEOSFriendUser>()
	{
		return UEOSFriendUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSFriendUser(Z_Construct_UClass_UEOSFriendUser, &UEOSFriendUser::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSFriendUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSFriendUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
