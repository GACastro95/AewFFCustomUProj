// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSFriend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSFriend() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriend_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriend();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendUser_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresenceBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSFriendEventDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_UpdatePUIDEventDispatcher__DelegateSignature();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendOwnRequest_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSFriend::execFindFriend)
	{
		P_GET_OBJECT_REF(UEOSFriendUser,Z_Param_Out__FriendUser);
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindFriend(Z_Param_Out__FriendUser,Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriend::execFindFriendByEpicID)
	{
		P_GET_OBJECT_REF(UEOSFriendUser,Z_Param_Out__FriendUser);
		P_GET_PROPERTY(FStrProperty,Z_Param__EpicID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindFriendByEpicID(Z_Param_Out__FriendUser,Z_Param__EpicID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriend::execFindFriendPresence)
	{
		P_GET_OBJECT_REF(UEOSPresenceBase,Z_Param_Out__Presence);
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindFriendPresence(Z_Param_Out__Presence,Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriend::execFindFriendPresenceByEpicID)
	{
		P_GET_OBJECT_REF(UEOSPresenceBase,Z_Param_Out__Presence);
		P_GET_PROPERTY(FStrProperty,Z_Param__EpicID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindFriendPresenceByEpicID(Z_Param_Out__Presence,Z_Param__EpicID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriend::execGetProductUserIds)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ProductUserIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetProductUserIds(Z_Param_Out_ProductUserIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriend::execGetUsers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UEOSFriendUser*>*)Z_Param__Result=P_THIS->GetUsers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriend::execRequestGetFriends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetFriends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriend::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSFriendAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSFriend::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriend::execSetEnableForAutomaticGetInformationBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__enAutomaticGetInfoBit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableForAutomaticGetInformationBits(Z_Param__enAutomaticGetInfoBit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSFriend::execSetupInternalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupInternalCallback();
		P_NATIVE_END;
	}
	void UEOSFriend::StaticRegisterNativesUEOSFriend()
	{
		UClass* Class = UEOSFriend::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindFriend", &UEOSFriend::execFindFriend },
			{ "FindFriendByEpicID", &UEOSFriend::execFindFriendByEpicID },
			{ "FindFriendPresence", &UEOSFriend::execFindFriendPresence },
			{ "FindFriendPresenceByEpicID", &UEOSFriend::execFindFriendPresenceByEpicID },
			{ "GetProductUserIds", &UEOSFriend::execGetProductUserIds },
			{ "GetUsers", &UEOSFriend::execGetUsers },
			{ "RequestGetFriends", &UEOSFriend::execRequestGetFriends },
			{ "SetApiVersion", &UEOSFriend::execSetApiVersion },
			{ "SetEnableForAutomaticGetInformationBits", &UEOSFriend::execSetEnableForAutomaticGetInformationBits },
			{ "SetupInternalCallback", &UEOSFriend::execSetupInternalCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSFriend_FindFriend_Statics
	{
		struct EOSFriend_eventFindFriend_Parms
		{
			UEOSFriendUser* _FriendUser;
			FString _PUID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__FriendUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::NewProp__FriendUser = { "_FriendUser", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventFindFriend_Parms, _FriendUser), Z_Construct_UClass_UEOSFriendUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventFindFriend_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::NewProp__FriendUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::NewProp__PUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriend, nullptr, "FindFriend", nullptr, nullptr, sizeof(EOSFriend_eventFindFriend_Parms), Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriend_FindFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriend_FindFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics
	{
		struct EOSFriend_eventFindFriendByEpicID_Parms
		{
			UEOSFriendUser* _FriendUser;
			FString _EpicID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__FriendUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__EpicID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__EpicID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::NewProp__FriendUser = { "_FriendUser", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventFindFriendByEpicID_Parms, _FriendUser), Z_Construct_UClass_UEOSFriendUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::NewProp__EpicID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::NewProp__EpicID = { "_EpicID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventFindFriendByEpicID_Parms, _EpicID), METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::NewProp__EpicID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::NewProp__EpicID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::NewProp__FriendUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::NewProp__EpicID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriend, nullptr, "FindFriendByEpicID", nullptr, nullptr, sizeof(EOSFriend_eventFindFriendByEpicID_Parms), Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics
	{
		struct EOSFriend_eventFindFriendPresence_Parms
		{
			UEOSPresenceBase* _Presence;
			FString _PUID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Presence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::NewProp__Presence = { "_Presence", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventFindFriendPresence_Parms, _Presence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventFindFriendPresence_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::NewProp__Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::NewProp__PUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriend, nullptr, "FindFriendPresence", nullptr, nullptr, sizeof(EOSFriend_eventFindFriendPresence_Parms), Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriend_FindFriendPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriend_FindFriendPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics
	{
		struct EOSFriend_eventFindFriendPresenceByEpicID_Parms
		{
			UEOSPresenceBase* _Presence;
			FString _EpicID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Presence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__EpicID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__EpicID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::NewProp__Presence = { "_Presence", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventFindFriendPresenceByEpicID_Parms, _Presence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::NewProp__EpicID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::NewProp__EpicID = { "_EpicID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventFindFriendPresenceByEpicID_Parms, _EpicID), METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::NewProp__EpicID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::NewProp__EpicID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::NewProp__Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::NewProp__EpicID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriend, nullptr, "FindFriendPresenceByEpicID", nullptr, nullptr, sizeof(EOSFriend_eventFindFriendPresenceByEpicID_Parms), Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics
	{
		struct EOSFriend_eventGetProductUserIds_Parms
		{
			TArray<FString> ProductUserIDs;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProductUserIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::NewProp_ProductUserIDs_Inner = { "ProductUserIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::NewProp_ProductUserIDs = { "ProductUserIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventGetProductUserIds_Parms, ProductUserIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::NewProp_ProductUserIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::NewProp_ProductUserIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriend, nullptr, "GetProductUserIds", nullptr, nullptr, sizeof(EOSFriend_eventGetProductUserIds_Parms), Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriend_GetProductUserIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriend_GetProductUserIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriend_GetUsers_Statics
	{
		struct EOSFriend_eventGetUsers_Parms
		{
			TMap<FString,UEOSFriendUser*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSFriendUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventGetUsers_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriend, nullptr, "GetUsers", nullptr, nullptr, sizeof(EOSFriend_eventGetUsers_Parms), Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriend_GetUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriend_GetUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics
	{
		struct EOSFriend_eventRequestGetFriends_Parms
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
	void Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFriend_eventRequestGetFriends_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFriend_eventRequestGetFriends_Parms), &Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriend, nullptr, "RequestGetFriends", nullptr, nullptr, sizeof(EOSFriend_eventRequestGetFriends_Parms), Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriend_RequestGetFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriend_RequestGetFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics
	{
		struct EOSFriend_eventSetApiVersion_Parms
		{
			FEOSFriendAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSFriendAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriend, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSFriend_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriend_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriend_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics
	{
		struct EOSFriend_eventSetEnableForAutomaticGetInformationBits_Parms
		{
			int32 _enAutomaticGetInfoBit;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__enAutomaticGetInfoBit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics::NewProp__enAutomaticGetInfoBit = { "_enAutomaticGetInfoBit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSFriend_eventSetEnableForAutomaticGetInformationBits_Parms, _enAutomaticGetInfoBit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics::NewProp__enAutomaticGetInfoBit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriend, nullptr, "SetEnableForAutomaticGetInformationBits", nullptr, nullptr, sizeof(EOSFriend_eventSetEnableForAutomaticGetInformationBits_Parms), Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics
	{
		struct EOSFriend_eventSetupInternalCallback_Parms
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
	void Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSFriend_eventSetupInternalCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSFriend_eventSetupInternalCallback_Parms), &Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSFriend, nullptr, "SetupInternalCallback", nullptr, nullptr, sizeof(EOSFriend_eventSetupInternalCallback_Parms), Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSFriend_SetupInternalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSFriend_SetupInternalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSFriend_NoRegister()
	{
		return UEOSFriend::StaticClass();
	}
	struct Z_Construct_UClass_UEOSFriend_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FriendEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatePUIDEventDispacher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UpdatePUIDEventDispacher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cUsers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cUsers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cUsers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cOwnRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cOwnRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cOwnRequests;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSFriend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSFriend_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSFriend_FindFriend, "FindFriend" }, // 2559724088
		{ &Z_Construct_UFunction_UEOSFriend_FindFriendByEpicID, "FindFriendByEpicID" }, // 1163380335
		{ &Z_Construct_UFunction_UEOSFriend_FindFriendPresence, "FindFriendPresence" }, // 536556392
		{ &Z_Construct_UFunction_UEOSFriend_FindFriendPresenceByEpicID, "FindFriendPresenceByEpicID" }, // 3957419428
		{ &Z_Construct_UFunction_UEOSFriend_GetProductUserIds, "GetProductUserIds" }, // 2693738439
		{ &Z_Construct_UFunction_UEOSFriend_GetUsers, "GetUsers" }, // 725868735
		{ &Z_Construct_UFunction_UEOSFriend_RequestGetFriends, "RequestGetFriends" }, // 1649913308
		{ &Z_Construct_UFunction_UEOSFriend_SetApiVersion, "SetApiVersion" }, // 3630365475
		{ &Z_Construct_UFunction_UEOSFriend_SetEnableForAutomaticGetInformationBits, "SetEnableForAutomaticGetInformationBits" }, // 11111394
		{ &Z_Construct_UFunction_UEOSFriend_SetupInternalCallback, "SetupInternalCallback" }, // 2066304376
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriend_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSFriend.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriend_Statics::NewProp_FriendEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriend" },
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSFriend_Statics::NewProp_FriendEventDispatcher = { "FriendEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSFriend, FriendEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSFriendEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSFriend_Statics::NewProp_FriendEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriend_Statics::NewProp_FriendEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriend_Statics::NewProp_UpdatePUIDEventDispacher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriend" },
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSFriend_Statics::NewProp_UpdatePUIDEventDispacher = { "UpdatePUIDEventDispacher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSFriend, UpdatePUIDEventDispacher), Z_Construct_UDelegateFunction_yEOSSDK_UpdatePUIDEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSFriend_Statics::NewProp_UpdatePUIDEventDispacher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriend_Statics::NewProp_UpdatePUIDEventDispacher_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cUsers_ValueProp = { "m_cUsers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSFriendUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cUsers_Key_KeyProp = { "m_cUsers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriend" },
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cUsers = { "m_cUsers", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSFriend, m_cUsers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cUsers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cOwnRequests_Inner = { "m_cOwnRequests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSFriendOwnRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cOwnRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriend" },
		{ "ModuleRelativePath", "Public/EOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cOwnRequests = { "m_cOwnRequests", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSFriend, m_cOwnRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cOwnRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cOwnRequests_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriend_Statics::NewProp_FriendEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriend_Statics::NewProp_UpdatePUIDEventDispacher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cUsers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cUsers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cOwnRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriend_Statics::NewProp_m_cOwnRequests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSFriend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSFriend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSFriend_Statics::ClassParams = {
		&UEOSFriend::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSFriend_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriend_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSFriend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSFriend()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSFriend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSFriend, 2643601633);
	template<> YEOSSDK_API UClass* StaticClass<UEOSFriend>()
	{
		return UEOSFriend::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSFriend(Z_Construct_UClass_UEOSFriend, &UEOSFriend::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSFriend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSFriend);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
