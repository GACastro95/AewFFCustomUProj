// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSCommunityInfoBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCommunityInfoBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAttribute_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityInfoType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityJoinType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityPermission();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSCommunityUserAddedDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSCommunityUserRemovedDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSCommunityClosedDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execFindAttribute)
	{
		P_GET_OBJECT_REF(UEOSAttribute,Z_Param_Out__pcAttribute);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindAttribute(Z_Param_Out__pcAttribute,Z_Param__strKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execFindPlayer)
	{
		P_GET_OBJECT_REF(UEOSCommunityUserBase,Z_Param_Out__pcPlayer);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindPlayer(Z_Param_Out__pcPlayer,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetAccountDisplayNameForOwnerUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccountDisplayNameForOwnerUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UEOSAttribute*>*)Z_Param__Result=P_THIS->GetAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetAvailableSlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAvailableSlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetInfoType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSCommunityInfoType*)Z_Param__Result=P_THIS->GetInfoType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetInviteUser)
	{
		P_GET_OBJECT_REF(UEOSCommunityUserBase,Z_Param_Out__pcCommunityUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInviteUser(Z_Param_Out__pcCommunityUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetJoinType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSCommunityJoinType*)Z_Param__Result=P_THIS->GetJoinType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetMaxMember)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxMember();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetOwnerUser)
	{
		P_GET_OBJECT_REF(UEOSCommunityUserBase,Z_Param_Out__pcCommunityUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOwnerUser(Z_Param_Out__pcCommunityUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetPermission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSCommunityPermission*)Z_Param__Result=P_THIS->GetPermission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetPlayerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UEOSCommunityUserBase*>*)Z_Param__Result=P_THIS->GetPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetPlayersSortedByDisplayName)
	{
		P_GET_TARRAY_REF(UEOSCommunityUserBase*,Z_Param_Out__cArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayersSortedByDisplayName(Z_Param_Out__cArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetRegistKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRegistKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetSortedPlayers)
	{
		P_GET_TARRAY_REF(UEOSCommunityUserBase*,Z_Param_Out__cArray);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSortAttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSortedPlayers(Z_Param_Out__cArray,Z_Param__strSortAttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetStringOfCommunityID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfCommunityID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetStringOfInviteProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfInviteProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execGetStringOfProductUserIDForOwnerUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringOfProductUserIDForOwnerUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execHasPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPlayer(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execIsInvitesAllowed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInvitesAllowed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execIsJoinedIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsJoinedIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execIsOwner)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOwner(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityInfoBase::execIsOwnerUser)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOwnerUser(Z_Param_User);
		P_NATIVE_END;
	}
	void UEOSCommunityInfoBase::StaticRegisterNativesUEOSCommunityInfoBase()
	{
		UClass* Class = UEOSCommunityInfoBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindAttribute", &UEOSCommunityInfoBase::execFindAttribute },
			{ "FindPlayer", &UEOSCommunityInfoBase::execFindPlayer },
			{ "GetAccountDisplayNameForOwnerUser", &UEOSCommunityInfoBase::execGetAccountDisplayNameForOwnerUser },
			{ "GetAttributes", &UEOSCommunityInfoBase::execGetAttributes },
			{ "GetAvailableSlots", &UEOSCommunityInfoBase::execGetAvailableSlots },
			{ "GetInfoType", &UEOSCommunityInfoBase::execGetInfoType },
			{ "GetInviteUser", &UEOSCommunityInfoBase::execGetInviteUser },
			{ "GetJoinType", &UEOSCommunityInfoBase::execGetJoinType },
			{ "GetMaxMember", &UEOSCommunityInfoBase::execGetMaxMember },
			{ "GetOwnerUser", &UEOSCommunityInfoBase::execGetOwnerUser },
			{ "GetPermission", &UEOSCommunityInfoBase::execGetPermission },
			{ "GetPlayerNum", &UEOSCommunityInfoBase::execGetPlayerNum },
			{ "GetPlayers", &UEOSCommunityInfoBase::execGetPlayers },
			{ "GetPlayersSortedByDisplayName", &UEOSCommunityInfoBase::execGetPlayersSortedByDisplayName },
			{ "GetRegistKey", &UEOSCommunityInfoBase::execGetRegistKey },
			{ "GetSortedPlayers", &UEOSCommunityInfoBase::execGetSortedPlayers },
			{ "GetStringOfCommunityID", &UEOSCommunityInfoBase::execGetStringOfCommunityID },
			{ "GetStringOfInviteProductUserID", &UEOSCommunityInfoBase::execGetStringOfInviteProductUserID },
			{ "GetStringOfProductUserIDForOwnerUser", &UEOSCommunityInfoBase::execGetStringOfProductUserIDForOwnerUser },
			{ "HasPlayer", &UEOSCommunityInfoBase::execHasPlayer },
			{ "IsActive", &UEOSCommunityInfoBase::execIsActive },
			{ "IsInvitesAllowed", &UEOSCommunityInfoBase::execIsInvitesAllowed },
			{ "IsJoinedIn", &UEOSCommunityInfoBase::execIsJoinedIn },
			{ "IsOwner", &UEOSCommunityInfoBase::execIsOwner },
			{ "IsOwnerUser", &UEOSCommunityInfoBase::execIsOwnerUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics
	{
		struct EOSCommunityInfoBase_eventFindAttribute_Parms
		{
			UEOSAttribute* _pcAttribute;
			FString _strKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp__pcAttribute = { "_pcAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventFindAttribute_Parms, _pcAttribute), Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventFindAttribute_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityInfoBase_eventFindAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityInfoBase_eventFindAttribute_Parms), &Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp__pcAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "FindAttribute", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventFindAttribute_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics
	{
		struct EOSCommunityInfoBase_eventFindPlayer_Parms
		{
			UEOSCommunityUserBase* _pcPlayer;
			FString _strProductUserID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp__pcPlayer = { "_pcPlayer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventFindPlayer_Parms, _pcPlayer), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventFindPlayer_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityInfoBase_eventFindPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityInfoBase_eventFindPlayer_Parms), &Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp__pcPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "FindPlayer", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventFindPlayer_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics
	{
		struct EOSCommunityInfoBase_eventGetAccountDisplayNameForOwnerUser_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetAccountDisplayNameForOwnerUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetAccountDisplayNameForOwnerUser", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetAccountDisplayNameForOwnerUser_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics
	{
		struct EOSCommunityInfoBase_eventGetAttributes_Parms
		{
			TMap<FString,UEOSAttribute*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetAttributes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetAttributes", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetAttributes_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics
	{
		struct EOSCommunityInfoBase_eventGetAvailableSlots_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetAvailableSlots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetAvailableSlots", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetAvailableSlots_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics
	{
		struct EOSCommunityInfoBase_eventGetInfoType_Parms
		{
			EEOSCommunityInfoType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetInfoType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSCommunityInfoType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetInfoType", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetInfoType_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics
	{
		struct EOSCommunityInfoBase_eventGetInviteUser_Parms
		{
			UEOSCommunityUserBase* _pcCommunityUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::NewProp__pcCommunityUser = { "_pcCommunityUser", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetInviteUser_Parms, _pcCommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityInfoBase_eventGetInviteUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityInfoBase_eventGetInviteUser_Parms), &Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::NewProp__pcCommunityUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetInviteUser", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetInviteUser_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics
	{
		struct EOSCommunityInfoBase_eventGetJoinType_Parms
		{
			EEOSCommunityJoinType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetJoinType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSCommunityJoinType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetJoinType", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetJoinType_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics
	{
		struct EOSCommunityInfoBase_eventGetMaxMember_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetMaxMember_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetMaxMember", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetMaxMember_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics
	{
		struct EOSCommunityInfoBase_eventGetOwnerUser_Parms
		{
			UEOSCommunityUserBase* _pcCommunityUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::NewProp__pcCommunityUser = { "_pcCommunityUser", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetOwnerUser_Parms, _pcCommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityInfoBase_eventGetOwnerUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityInfoBase_eventGetOwnerUser_Parms), &Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::NewProp__pcCommunityUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetOwnerUser", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetOwnerUser_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics
	{
		struct EOSCommunityInfoBase_eventGetPermission_Parms
		{
			EEOSCommunityPermission ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetPermission_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSCommunityPermission, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetPermission", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetPermission_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics
	{
		struct EOSCommunityInfoBase_eventGetPlayerNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetPlayerNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetPlayerNum", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetPlayerNum_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics
	{
		struct EOSCommunityInfoBase_eventGetPlayers_Parms
		{
			TMap<FString,UEOSCommunityUserBase*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetPlayers_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetPlayers", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetPlayers_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics
	{
		struct EOSCommunityInfoBase_eventGetPlayersSortedByDisplayName_Parms
		{
			TArray<UEOSCommunityUserBase*> _cArray;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::NewProp__cArray_Inner = { "_cArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::NewProp__cArray = { "_cArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetPlayersSortedByDisplayName_Parms, _cArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::NewProp__cArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::NewProp__cArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetPlayersSortedByDisplayName", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetPlayersSortedByDisplayName_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics
	{
		struct EOSCommunityInfoBase_eventGetRegistKey_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetRegistKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetRegistKey", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetRegistKey_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics
	{
		struct EOSCommunityInfoBase_eventGetSortedPlayers_Parms
		{
			TArray<UEOSCommunityUserBase*> _cArray;
			FString _strSortAttributeName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSortAttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSortAttributeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::NewProp__cArray_Inner = { "_cArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::NewProp__cArray = { "_cArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetSortedPlayers_Parms, _cArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::NewProp__strSortAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::NewProp__strSortAttributeName = { "_strSortAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetSortedPlayers_Parms, _strSortAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::NewProp__strSortAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::NewProp__strSortAttributeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::NewProp__cArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::NewProp__cArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::NewProp__strSortAttributeName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetSortedPlayers", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetSortedPlayers_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics
	{
		struct EOSCommunityInfoBase_eventGetStringOfCommunityID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetStringOfCommunityID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetStringOfCommunityID", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetStringOfCommunityID_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics
	{
		struct EOSCommunityInfoBase_eventGetStringOfInviteProductUserID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetStringOfInviteProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetStringOfInviteProductUserID", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetStringOfInviteProductUserID_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics
	{
		struct EOSCommunityInfoBase_eventGetStringOfProductUserIDForOwnerUser_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventGetStringOfProductUserIDForOwnerUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "GetStringOfProductUserIDForOwnerUser", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventGetStringOfProductUserIDForOwnerUser_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics
	{
		struct EOSCommunityInfoBase_eventHasPlayer_Parms
		{
			FString _strProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventHasPlayer_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityInfoBase_eventHasPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityInfoBase_eventHasPlayer_Parms), &Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "HasPlayer", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventHasPlayer_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics
	{
		struct EOSCommunityInfoBase_eventIsActive_Parms
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
	void Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityInfoBase_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityInfoBase_eventIsActive_Parms), &Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "IsActive", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventIsActive_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics
	{
		struct EOSCommunityInfoBase_eventIsInvitesAllowed_Parms
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
	void Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityInfoBase_eventIsInvitesAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityInfoBase_eventIsInvitesAllowed_Parms), &Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "IsInvitesAllowed", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventIsInvitesAllowed_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics
	{
		struct EOSCommunityInfoBase_eventIsJoinedIn_Parms
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
	void Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityInfoBase_eventIsJoinedIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityInfoBase_eventIsJoinedIn_Parms), &Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "IsJoinedIn", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventIsJoinedIn_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics
	{
		struct EOSCommunityInfoBase_eventIsOwner_Parms
		{
			FString _strProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventIsOwner_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityInfoBase_eventIsOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityInfoBase_eventIsOwner_Parms), &Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "IsOwner", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventIsOwner_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics
	{
		struct EOSCommunityInfoBase_eventIsOwnerUser_Parms
		{
			const UEOSUserBase* User;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::NewProp_User_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityInfoBase_eventIsOwnerUser_Parms, User), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::NewProp_User_MetaData)) };
	void Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityInfoBase_eventIsOwnerUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityInfoBase_eventIsOwnerUser_Parms), &Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityInfoBase, nullptr, "IsOwnerUser", nullptr, nullptr, sizeof(EOSCommunityInfoBase_eventIsOwnerUser_Parms), Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister()
	{
		return UEOSCommunityInfoBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCommunityInfoBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityUserAddedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CommunityUserAddedDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityUserRemovedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CommunityUserRemovedDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityClosedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CommunityClosedDispatcher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cAttributes_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cAttributes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cAttributes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cPlayers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cPlayers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcOwnerUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcOwnerUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcInviteUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcInviteUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCommunityInfoBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSLockebleCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCommunityInfoBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_FindAttribute, "FindAttribute" }, // 225937989
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_FindPlayer, "FindPlayer" }, // 564958861
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetAccountDisplayNameForOwnerUser, "GetAccountDisplayNameForOwnerUser" }, // 2428464160
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetAttributes, "GetAttributes" }, // 377053168
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetAvailableSlots, "GetAvailableSlots" }, // 1889123179
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetInfoType, "GetInfoType" }, // 61893454
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetInviteUser, "GetInviteUser" }, // 570550694
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetJoinType, "GetJoinType" }, // 164358478
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetMaxMember, "GetMaxMember" }, // 533204321
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetOwnerUser, "GetOwnerUser" }, // 217542357
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetPermission, "GetPermission" }, // 1445128812
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayerNum, "GetPlayerNum" }, // 1856304202
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayers, "GetPlayers" }, // 1119050592
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetPlayersSortedByDisplayName, "GetPlayersSortedByDisplayName" }, // 3225129745
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetRegistKey, "GetRegistKey" }, // 1245590295
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetSortedPlayers, "GetSortedPlayers" }, // 868580709
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfCommunityID, "GetStringOfCommunityID" }, // 893237787
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfInviteProductUserID, "GetStringOfInviteProductUserID" }, // 2215304900
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_GetStringOfProductUserIDForOwnerUser, "GetStringOfProductUserIDForOwnerUser" }, // 3227602377
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_HasPlayer, "HasPlayer" }, // 4268442785
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_IsActive, "IsActive" }, // 4278034674
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_IsInvitesAllowed, "IsInvitesAllowed" }, // 2605352608
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_IsJoinedIn, "IsJoinedIn" }, // 589349331
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwner, "IsOwner" }, // 2950661152
		{ &Z_Construct_UFunction_UEOSCommunityInfoBase_IsOwnerUser, "IsOwnerUser" }, // 100912576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityInfoBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSCommunityInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityUserAddedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityInfoBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityUserAddedDispatcher = { "CommunityUserAddedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityInfoBase, CommunityUserAddedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSCommunityUserAddedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityUserAddedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityUserAddedDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityUserRemovedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityInfoBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityUserRemovedDispatcher = { "CommunityUserRemovedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityInfoBase, CommunityUserRemovedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSCommunityUserRemovedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityUserRemovedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityUserRemovedDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityClosedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityInfoBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityClosedDispatcher = { "CommunityClosedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityInfoBase, CommunityClosedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSCommunityClosedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityClosedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityClosedDispatcher_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cAttributes_ValueProp = { "m_cAttributes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cAttributes_Key_KeyProp = { "m_cAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityInfoBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cAttributes = { "m_cAttributes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityInfoBase, m_cAttributes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cAttributes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cPlayers_ValueProp = { "m_cPlayers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cPlayers_Key_KeyProp = { "m_cPlayers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityInfoBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cPlayers = { "m_cPlayers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityInfoBase, m_cPlayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_pcOwnerUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityInfoBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_pcOwnerUser = { "m_pcOwnerUser", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityInfoBase, m_pcOwnerUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_pcOwnerUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_pcOwnerUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_pcInviteUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityInfoBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_pcInviteUser = { "m_pcInviteUser", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityInfoBase, m_pcInviteUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_pcInviteUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_pcInviteUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCommunityInfoBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityUserAddedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityUserRemovedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_CommunityClosedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cAttributes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cAttributes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cPlayers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cPlayers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_cPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_pcOwnerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityInfoBase_Statics::NewProp_m_pcInviteUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCommunityInfoBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCommunityInfoBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCommunityInfoBase_Statics::ClassParams = {
		&UEOSCommunityInfoBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCommunityInfoBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityInfoBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCommunityInfoBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCommunityInfoBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCommunityInfoBase, 3970745208);
	template<> YEOSSDK_API UClass* StaticClass<UEOSCommunityInfoBase>()
	{
		return UEOSCommunityInfoBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCommunityInfoBase(Z_Construct_UClass_UEOSCommunityInfoBase, &UEOSCommunityInfoBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSCommunityInfoBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCommunityInfoBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
