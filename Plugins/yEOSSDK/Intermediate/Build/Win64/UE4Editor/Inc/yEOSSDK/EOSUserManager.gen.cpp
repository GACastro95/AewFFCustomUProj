// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserManager() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserManager_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserManager();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAuth_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EExternalAccountType();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserTypeToUserBaseMap_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSFriendEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriend_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPresenceEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresenceBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentProgress();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserEvent();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSUserAddedDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSUserRemovedDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSUserEventDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSFriendEventDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSPresenceEventDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAPIRequestManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSUserManager::execAddEpicAccountUser)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddEpicAccountUser(Z_Param__pcUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execAddLocalUser)
	{
		P_GET_OBJECT(UEOSAuth,Z_Param__pcAuth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSUserBase**)Z_Param__Result=P_THIS->AddLocalUser(Z_Param__pcAuth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execAddProductUser)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddProductUser(Z_Param__pcUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execCreateUser)
	{
		P_GET_OBJECT_REF(UEOSUserBase,Z_Param_Out__pcUser);
		P_GET_PROPERTY(FStrProperty,Z_Param__strEpicAccountID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strLocalAccountID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strLocalProductUserID);
		P_GET_ENUM(EEOSUserType,Z_Param__enUserType);
		P_GET_OBJECT(UEOSAuth,Z_Param__pcEOSAuth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateUser(Z_Param_Out__pcUser,Z_Param__strEpicAccountID,Z_Param__strLocalAccountID,Z_Param__strProductUserID,Z_Param__strLocalProductUserID,EEOSUserType(Z_Param__enUserType),Z_Param__pcEOSAuth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execFindEpicAccountUser)
	{
		P_GET_OBJECT_REF(UEOSUserBase,Z_Param_Out__pcEOSUser);
		P_GET_PROPERTY(FStrProperty,Z_Param__strEpicAccountID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindEpicAccountUser(Z_Param_Out__pcEOSUser,Z_Param__strEpicAccountID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execFindProductUserID)
	{
		P_GET_OBJECT_REF(UEOSUserBase,Z_Param_Out__pcEOSUser);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_ENUM(EEOSUserType,Z_Param__enUserType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindProductUserID(Z_Param_Out__pcEOSUser,Z_Param__strProductUserID,EEOSUserType(Z_Param__enUserType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execGetCurrentPlatformAccountType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EExternalAccountType*)Z_Param__Result=P_THIS->GetCurrentPlatformAccountType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execGetEpicAccountUsers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UEOSUserBase*>*)Z_Param__Result=P_THIS->GetEpicAccountUsers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execGetProductUsers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UEOSUserTypeToUserBaseMap*>*)Z_Param__Result=P_THIS->GetProductUsers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execIsAddedEpicAccountUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strEpicAccountID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAddedEpicAccountUser(Z_Param__strEpicAccountID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execIsAddedProductUserID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_ENUM(EEOSUserType,Z_Param__enUserType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAddedProductUserID(Z_Param__strProductUserID,EEOSUserType(Z_Param__enUserType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execOnFriendEvent)
	{
		P_GET_ENUM(EEOSFriendEvent,Z_Param__eEvent);
		P_GET_OBJECT(UEOSFriend,Z_Param__pcFriend);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcFriendUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFriendEvent(EEOSFriendEvent(Z_Param__eEvent),Z_Param__pcFriend,Z_Param__pcFriendUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execOnFriendUpdatePUIDEvent)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcFriendUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFriendUpdatePUIDEvent(Z_Param__pcFriendUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execOnPresenceEvent)
	{
		P_GET_ENUM(EEOSPresenceEvent,Z_Param__enPresenceEvent);
		P_GET_OBJECT(UEOSPresenceBase,Z_Param__pcPresence);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFriendEpicAccountID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPresenceEvent(EEOSPresenceEvent(Z_Param__enPresenceEvent),Z_Param__pcPresence,Z_Param__strFriendEpicAccountID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execOnUserContentsEvent)
	{
		P_GET_ENUM(EEOSUserContentsEvent,Z_Param__enUserContentsEvent);
		P_GET_OBJECT(UEOSUserContentsBase,Z_Param__pcUserContentsBase);
		P_GET_STRUCT_REF(FEOSUserContentProgress,Z_Param_Out__rstUserContentProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserContentsEvent(EEOSUserContentsEvent(Z_Param__enUserContentsEvent),Z_Param__pcUserContentsBase,Z_Param_Out__rstUserContentProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execOnUserEvent)
	{
		P_GET_ENUM(EEOSUserEvent,Z_Param__eEvent);
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserEvent(EEOSUserEvent(Z_Param__eEvent),Z_Param__pcUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserManager::execRemoveUser)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__pcUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUser(Z_Param__pcUser);
		P_NATIVE_END;
	}
	void UEOSUserManager::StaticRegisterNativesUEOSUserManager()
	{
		UClass* Class = UEOSUserManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEpicAccountUser", &UEOSUserManager::execAddEpicAccountUser },
			{ "AddLocalUser", &UEOSUserManager::execAddLocalUser },
			{ "AddProductUser", &UEOSUserManager::execAddProductUser },
			{ "CreateUser", &UEOSUserManager::execCreateUser },
			{ "FindEpicAccountUser", &UEOSUserManager::execFindEpicAccountUser },
			{ "FindProductUserID", &UEOSUserManager::execFindProductUserID },
			{ "GetCurrentPlatformAccountType", &UEOSUserManager::execGetCurrentPlatformAccountType },
			{ "GetEpicAccountUsers", &UEOSUserManager::execGetEpicAccountUsers },
			{ "GetProductUsers", &UEOSUserManager::execGetProductUsers },
			{ "IsAddedEpicAccountUser", &UEOSUserManager::execIsAddedEpicAccountUser },
			{ "IsAddedProductUserID", &UEOSUserManager::execIsAddedProductUserID },
			{ "OnFriendEvent", &UEOSUserManager::execOnFriendEvent },
			{ "OnFriendUpdatePUIDEvent", &UEOSUserManager::execOnFriendUpdatePUIDEvent },
			{ "OnPresenceEvent", &UEOSUserManager::execOnPresenceEvent },
			{ "OnUserContentsEvent", &UEOSUserManager::execOnUserContentsEvent },
			{ "OnUserEvent", &UEOSUserManager::execOnUserEvent },
			{ "RemoveUser", &UEOSUserManager::execRemoveUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics
	{
		struct EOSUserManager_eventAddEpicAccountUser_Parms
		{
			UEOSUserBase* _pcUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventAddEpicAccountUser_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserManager_eventAddEpicAccountUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserManager_eventAddEpicAccountUser_Parms), &Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "AddEpicAccountUser", nullptr, nullptr, sizeof(EOSUserManager_eventAddEpicAccountUser_Parms), Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics
	{
		struct EOSUserManager_eventAddLocalUser_Parms
		{
			UEOSAuth* _pcAuth;
			UEOSUserBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcAuth;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::NewProp__pcAuth = { "_pcAuth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventAddLocalUser_Parms, _pcAuth), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventAddLocalUser_Parms, ReturnValue), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::NewProp__pcAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "AddLocalUser", nullptr, nullptr, sizeof(EOSUserManager_eventAddLocalUser_Parms), Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_AddLocalUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_AddLocalUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics
	{
		struct EOSUserManager_eventAddProductUser_Parms
		{
			UEOSUserBase* _pcUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventAddProductUser_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserManager_eventAddProductUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserManager_eventAddProductUser_Parms), &Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "AddProductUser", nullptr, nullptr, sizeof(EOSUserManager_eventAddProductUser_Parms), Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_AddProductUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_AddProductUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics
	{
		struct EOSUserManager_eventCreateUser_Parms
		{
			UEOSUserBase* _pcUser;
			FString _strEpicAccountID;
			FString _strLocalAccountID;
			FString _strProductUserID;
			FString _strLocalProductUserID;
			EEOSUserType _enUserType;
			UEOSAuth* _pcEOSAuth;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strLocalProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strLocalProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enUserType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enUserType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSAuth;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventCreateUser_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strEpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strEpicAccountID = { "_strEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventCreateUser_Parms, _strEpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strEpicAccountID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strLocalAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strLocalAccountID = { "_strLocalAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventCreateUser_Parms, _strLocalAccountID), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strLocalAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strLocalAccountID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventCreateUser_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strLocalProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strLocalProductUserID = { "_strLocalProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventCreateUser_Parms, _strLocalProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strLocalProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strLocalProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__enUserType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__enUserType = { "_enUserType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventCreateUser_Parms, _enUserType), Z_Construct_UEnum_yEOSSDK_EEOSUserType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__pcEOSAuth = { "_pcEOSAuth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventCreateUser_Parms, _pcEOSAuth), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserManager_eventCreateUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserManager_eventCreateUser_Parms), &Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strEpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strLocalAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__strLocalProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__enUserType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__enUserType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp__pcEOSAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "CreateUser", nullptr, nullptr, sizeof(EOSUserManager_eventCreateUser_Parms), Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_CreateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_CreateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics
	{
		struct EOSUserManager_eventFindEpicAccountUser_Parms
		{
			UEOSUserBase* _pcEOSUser;
			FString _strEpicAccountID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEpicAccountID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp__pcEOSUser = { "_pcEOSUser", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventFindEpicAccountUser_Parms, _pcEOSUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp__strEpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp__strEpicAccountID = { "_strEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventFindEpicAccountUser_Parms, _strEpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp__strEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp__strEpicAccountID_MetaData)) };
	void Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserManager_eventFindEpicAccountUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserManager_eventFindEpicAccountUser_Parms), &Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp__pcEOSUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp__strEpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "FindEpicAccountUser", nullptr, nullptr, sizeof(EOSUserManager_eventFindEpicAccountUser_Parms), Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics
	{
		struct EOSUserManager_eventFindProductUserID_Parms
		{
			UEOSUserBase* _pcEOSUser;
			FString _strProductUserID;
			EEOSUserType _enUserType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSUser;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__pcEOSUser = { "_pcEOSUser", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventFindProductUserID_Parms, _pcEOSUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventFindProductUserID_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__enUserType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__enUserType = { "_enUserType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventFindProductUserID_Parms, _enUserType), Z_Construct_UEnum_yEOSSDK_EEOSUserType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserManager_eventFindProductUserID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserManager_eventFindProductUserID_Parms), &Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__pcEOSUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__enUserType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp__enUserType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "FindProductUserID", nullptr, nullptr, sizeof(EOSUserManager_eventFindProductUserID_Parms), Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_FindProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_FindProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics
	{
		struct EOSUserManager_eventGetCurrentPlatformAccountType_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventGetCurrentPlatformAccountType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "GetCurrentPlatformAccountType", nullptr, nullptr, sizeof(EOSUserManager_eventGetCurrentPlatformAccountType_Parms), Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics
	{
		struct EOSUserManager_eventGetEpicAccountUsers_Parms
		{
			TMap<FString,UEOSUserBase*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventGetEpicAccountUsers_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "GetEpicAccountUsers", nullptr, nullptr, sizeof(EOSUserManager_eventGetEpicAccountUsers_Parms), Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics
	{
		struct EOSUserManager_eventGetProductUsers_Parms
		{
			TMap<FString,UEOSUserTypeToUserBaseMap*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSUserTypeToUserBaseMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventGetProductUsers_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "GetProductUsers", nullptr, nullptr, sizeof(EOSUserManager_eventGetProductUsers_Parms), Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_GetProductUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_GetProductUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics
	{
		struct EOSUserManager_eventIsAddedEpicAccountUser_Parms
		{
			FString _strEpicAccountID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEpicAccountID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::NewProp__strEpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::NewProp__strEpicAccountID = { "_strEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventIsAddedEpicAccountUser_Parms, _strEpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::NewProp__strEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::NewProp__strEpicAccountID_MetaData)) };
	void Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserManager_eventIsAddedEpicAccountUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserManager_eventIsAddedEpicAccountUser_Parms), &Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::NewProp__strEpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "IsAddedEpicAccountUser", nullptr, nullptr, sizeof(EOSUserManager_eventIsAddedEpicAccountUser_Parms), Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics
	{
		struct EOSUserManager_eventIsAddedProductUserID_Parms
		{
			FString _strProductUserID;
			EEOSUserType _enUserType;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventIsAddedProductUserID_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp__enUserType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp__enUserType = { "_enUserType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventIsAddedProductUserID_Parms, _enUserType), Z_Construct_UEnum_yEOSSDK_EEOSUserType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserManager_eventIsAddedProductUserID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserManager_eventIsAddedProductUserID_Parms), &Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp__enUserType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp__enUserType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "IsAddedProductUserID", nullptr, nullptr, sizeof(EOSUserManager_eventIsAddedProductUserID_Parms), Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics
	{
		struct EOSUserManager_eventOnFriendEvent_Parms
		{
			EEOSFriendEvent _eEvent;
			UEOSFriend* _pcFriend;
			UEOSUserBase* _pcFriendUser;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__eEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__eEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcFriend;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcFriendUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::NewProp__eEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::NewProp__eEvent = { "_eEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnFriendEvent_Parms, _eEvent), Z_Construct_UEnum_yEOSSDK_EEOSFriendEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::NewProp__pcFriend = { "_pcFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnFriendEvent_Parms, _pcFriend), Z_Construct_UClass_UEOSFriend_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::NewProp__pcFriendUser = { "_pcFriendUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnFriendEvent_Parms, _pcFriendUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::NewProp__eEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::NewProp__eEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::NewProp__pcFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::NewProp__pcFriendUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "OnFriendEvent", nullptr, nullptr, sizeof(EOSUserManager_eventOnFriendEvent_Parms), Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_OnFriendEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_OnFriendEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics
	{
		struct EOSUserManager_eventOnFriendUpdatePUIDEvent_Parms
		{
			UEOSUserBase* _pcFriendUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcFriendUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics::NewProp__pcFriendUser = { "_pcFriendUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnFriendUpdatePUIDEvent_Parms, _pcFriendUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics::NewProp__pcFriendUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "OnFriendUpdatePUIDEvent", nullptr, nullptr, sizeof(EOSUserManager_eventOnFriendUpdatePUIDEvent_Parms), Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics
	{
		struct EOSUserManager_eventOnPresenceEvent_Parms
		{
			EEOSPresenceEvent _enPresenceEvent;
			UEOSPresenceBase* _pcPresence;
			FString _strFriendEpicAccountID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enPresenceEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enPresenceEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFriendEpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFriendEpicAccountID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__enPresenceEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__enPresenceEvent = { "_enPresenceEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnPresenceEvent_Parms, _enPresenceEvent), Z_Construct_UEnum_yEOSSDK_EEOSPresenceEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__pcPresence = { "_pcPresence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnPresenceEvent_Parms, _pcPresence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__strFriendEpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__strFriendEpicAccountID = { "_strFriendEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnPresenceEvent_Parms, _strFriendEpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__strFriendEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__strFriendEpicAccountID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__enPresenceEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__enPresenceEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__pcPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::NewProp__strFriendEpicAccountID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "OnPresenceEvent", nullptr, nullptr, sizeof(EOSUserManager_eventOnPresenceEvent_Parms), Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics
	{
		struct EOSUserManager_eventOnUserContentsEvent_Parms
		{
			EEOSUserContentsEvent _enUserContentsEvent;
			UEOSUserContentsBase* _pcUserContentsBase;
			FEOSUserContentProgress _rstUserContentProgress;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enUserContentsEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enUserContentsEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserContentsBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstUserContentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstUserContentProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent = { "_enUserContentsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnUserContentsEvent_Parms, _enUserContentsEvent), Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__pcUserContentsBase = { "_pcUserContentsBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnUserContentsEvent_Parms, _pcUserContentsBase), Z_Construct_UClass_UEOSUserContentsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__rstUserContentProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__rstUserContentProgress = { "_rstUserContentProgress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnUserContentsEvent_Parms, _rstUserContentProgress), Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__rstUserContentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__rstUserContentProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__pcUserContentsBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::NewProp__rstUserContentProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "OnUserContentsEvent", nullptr, nullptr, sizeof(EOSUserManager_eventOnUserContentsEvent_Parms), Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics
	{
		struct EOSUserManager_eventOnUserEvent_Parms
		{
			EEOSUserEvent _eEvent;
			UEOSUserBase* _pcUser;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__eEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__eEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::NewProp__eEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::NewProp__eEvent = { "_eEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnUserEvent_Parms, _eEvent), Z_Construct_UEnum_yEOSSDK_EEOSUserEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventOnUserEvent_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::NewProp__eEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::NewProp__eEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::NewProp__pcUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "OnUserEvent", nullptr, nullptr, sizeof(EOSUserManager_eventOnUserEvent_Parms), Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_OnUserEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_OnUserEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics
	{
		struct EOSUserManager_eventRemoveUser_Parms
		{
			UEOSUserBase* _pcUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserManager_eventRemoveUser_Parms, _pcUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserManager_eventRemoveUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserManager_eventRemoveUser_Parms), &Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserManager, nullptr, "RemoveUser", nullptr, nullptr, sizeof(EOSUserManager_eventRemoveUser_Parms), Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserManager_RemoveUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserManager_RemoveUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSUserManager_NoRegister()
	{
		return UEOSUserManager::StaticClass();
	}
	struct Z_Construct_UClass_UEOSUserManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserAddedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserAddedDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserRemovedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserRemovedDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FriendEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PresenceEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserContentsEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserContentsEventDispatcher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cEpicAccountUsers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cEpicAccountUsers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cEpicAccountUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cEpicAccountUsers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cProductUsers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cProductUsers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cProductUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cProductUsers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcRefAPIRequestManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcRefAPIRequestManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSUserManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSLockebleCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSUserManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSUserManager_AddEpicAccountUser, "AddEpicAccountUser" }, // 1425807102
		{ &Z_Construct_UFunction_UEOSUserManager_AddLocalUser, "AddLocalUser" }, // 3423347381
		{ &Z_Construct_UFunction_UEOSUserManager_AddProductUser, "AddProductUser" }, // 1225076035
		{ &Z_Construct_UFunction_UEOSUserManager_CreateUser, "CreateUser" }, // 480720914
		{ &Z_Construct_UFunction_UEOSUserManager_FindEpicAccountUser, "FindEpicAccountUser" }, // 847866275
		{ &Z_Construct_UFunction_UEOSUserManager_FindProductUserID, "FindProductUserID" }, // 2870780342
		{ &Z_Construct_UFunction_UEOSUserManager_GetCurrentPlatformAccountType, "GetCurrentPlatformAccountType" }, // 2472377478
		{ &Z_Construct_UFunction_UEOSUserManager_GetEpicAccountUsers, "GetEpicAccountUsers" }, // 748882871
		{ &Z_Construct_UFunction_UEOSUserManager_GetProductUsers, "GetProductUsers" }, // 3153446875
		{ &Z_Construct_UFunction_UEOSUserManager_IsAddedEpicAccountUser, "IsAddedEpicAccountUser" }, // 1046915949
		{ &Z_Construct_UFunction_UEOSUserManager_IsAddedProductUserID, "IsAddedProductUserID" }, // 994426736
		{ &Z_Construct_UFunction_UEOSUserManager_OnFriendEvent, "OnFriendEvent" }, // 1930674453
		{ &Z_Construct_UFunction_UEOSUserManager_OnFriendUpdatePUIDEvent, "OnFriendUpdatePUIDEvent" }, // 4164566831
		{ &Z_Construct_UFunction_UEOSUserManager_OnPresenceEvent, "OnPresenceEvent" }, // 864110296
		{ &Z_Construct_UFunction_UEOSUserManager_OnUserContentsEvent, "OnUserContentsEvent" }, // 1527104813
		{ &Z_Construct_UFunction_UEOSUserManager_OnUserEvent, "OnUserEvent" }, // 2318536327
		{ &Z_Construct_UFunction_UEOSUserManager_RemoveUser, "RemoveUser" }, // 3628247478
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSUserManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserAddedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserManager" },
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserAddedDispatcher = { "UserAddedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserManager, UserAddedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSUserAddedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserAddedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserAddedDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserRemovedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserManager" },
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserRemovedDispatcher = { "UserRemovedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserManager, UserRemovedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSUserRemovedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserRemovedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserRemovedDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserManager" },
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserEventDispatcher = { "UserEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserManager, UserEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSUserEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserManager_Statics::NewProp_FriendEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserManager" },
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_FriendEventDispatcher = { "FriendEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserManager, FriendEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSFriendEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_FriendEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_FriendEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserManager_Statics::NewProp_PresenceEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserManager" },
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_PresenceEventDispatcher = { "PresenceEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserManager, PresenceEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSPresenceEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_PresenceEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_PresenceEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserContentsEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserManager" },
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserContentsEventDispatcher = { "UserContentsEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserManager, UserContentsEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserContentsEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserContentsEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cEpicAccountUsers_ValueProp = { "m_cEpicAccountUsers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cEpicAccountUsers_Key_KeyProp = { "m_cEpicAccountUsers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cEpicAccountUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserManager" },
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cEpicAccountUsers = { "m_cEpicAccountUsers", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserManager, m_cEpicAccountUsers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cEpicAccountUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cEpicAccountUsers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cProductUsers_ValueProp = { "m_cProductUsers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSUserTypeToUserBaseMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cProductUsers_Key_KeyProp = { "m_cProductUsers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cProductUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserManager" },
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cProductUsers = { "m_cProductUsers", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserManager, m_cProductUsers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cProductUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cProductUsers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_pcRefAPIRequestManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserManager" },
		{ "ModuleRelativePath", "Public/EOSUserManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_pcRefAPIRequestManager = { "m_pcRefAPIRequestManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserManager, m_pcRefAPIRequestManager), Z_Construct_UClass_UEOSAPIRequestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_pcRefAPIRequestManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_pcRefAPIRequestManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSUserManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserAddedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserRemovedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_FriendEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_PresenceEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_UserContentsEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cEpicAccountUsers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cEpicAccountUsers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cEpicAccountUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cProductUsers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cProductUsers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_cProductUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserManager_Statics::NewProp_m_pcRefAPIRequestManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSUserManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSUserManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSUserManager_Statics::ClassParams = {
		&UEOSUserManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSUserManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSUserManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSUserManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSUserManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSUserManager, 920141255);
	template<> YEOSSDK_API UClass* StaticClass<UEOSUserManager>()
	{
		return UEOSUserManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSUserManager(Z_Construct_UClass_UEOSUserManager, &UEOSUserManager::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSUserManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSUserManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
