// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSCommunityUserBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCommunityUserBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAttribute_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCommunityUserBase::execEqual)
	{
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equal(Z_Param_User);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityUserBase::execFindAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strAttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAttribute**)Z_Param__Result=P_THIS->FindAttribute(Z_Param__strAttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityUserBase::execGetAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UEOSAttribute*>*)Z_Param__Result=P_THIS->GetAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityUserBase::execGetInviteID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetInviteID();
		P_NATIVE_END;
	}
	void UEOSCommunityUserBase::StaticRegisterNativesUEOSCommunityUserBase()
	{
		UClass* Class = UEOSCommunityUserBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Equal", &UEOSCommunityUserBase::execEqual },
			{ "FindAttribute", &UEOSCommunityUserBase::execFindAttribute },
			{ "GetAttributes", &UEOSCommunityUserBase::execGetAttributes },
			{ "GetInviteID", &UEOSCommunityUserBase::execGetInviteID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics
	{
		struct EOSCommunityUserBase_eventEqual_Parms
		{
			const UEOSCommunityUserBase* User;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::NewProp_User_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityUserBase_eventEqual_Parms, User), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::NewProp_User_MetaData)) };
	void Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSCommunityUserBase_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSCommunityUserBase_eventEqual_Parms), &Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityUserBase, nullptr, "Equal", nullptr, nullptr, sizeof(EOSCommunityUserBase_eventEqual_Parms), Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityUserBase_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityUserBase_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics
	{
		struct EOSCommunityUserBase_eventFindAttribute_Parms
		{
			FString _strAttributeName;
			UEOSAttribute* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strAttributeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strAttributeName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::NewProp__strAttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::NewProp__strAttributeName = { "_strAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityUserBase_eventFindAttribute_Parms, _strAttributeName), METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::NewProp__strAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::NewProp__strAttributeName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityUserBase_eventFindAttribute_Parms, ReturnValue), Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::NewProp__strAttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityUserBase, nullptr, "FindAttribute", nullptr, nullptr, sizeof(EOSCommunityUserBase_eventFindAttribute_Parms), Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics
	{
		struct EOSCommunityUserBase_eventGetAttributes_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityUserBase_eventGetAttributes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityUserBase, nullptr, "GetAttributes", nullptr, nullptr, sizeof(EOSCommunityUserBase_eventGetAttributes_Parms), Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics
	{
		struct EOSCommunityUserBase_eventGetInviteID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityUserBase_eventGetInviteID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityUserBase, nullptr, "GetInviteID", nullptr, nullptr, sizeof(EOSCommunityUserBase_eventGetInviteID_Parms), Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister()
	{
		return UEOSCommunityUserBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCommunityUserBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cAttributes_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cAttributes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cAttributes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cOwnRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cOwnRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cOwnRequests;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCommunityUserBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSUserBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCommunityUserBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCommunityUserBase_Equal, "Equal" }, // 1240336008
		{ &Z_Construct_UFunction_UEOSCommunityUserBase_FindAttribute, "FindAttribute" }, // 2535719158
		{ &Z_Construct_UFunction_UEOSCommunityUserBase_GetAttributes, "GetAttributes" }, // 1218898738
		{ &Z_Construct_UFunction_UEOSCommunityUserBase_GetInviteID, "GetInviteID" }, // 1667792034
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityUserBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSCommunityUserBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSCommunityUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cAttributes_ValueProp = { "m_cAttributes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cAttributes_Key_KeyProp = { "m_cAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityUserBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cAttributes = { "m_cAttributes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityUserBase, m_cAttributes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cAttributes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cOwnRequests_Inner = { "m_cOwnRequests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cOwnRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityUserBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityUserBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cOwnRequests = { "m_cOwnRequests", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityUserBase, m_cOwnRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cOwnRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cOwnRequests_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCommunityUserBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cAttributes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cAttributes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cOwnRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityUserBase_Statics::NewProp_m_cOwnRequests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCommunityUserBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCommunityUserBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCommunityUserBase_Statics::ClassParams = {
		&UEOSCommunityUserBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCommunityUserBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityUserBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityUserBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityUserBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCommunityUserBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCommunityUserBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCommunityUserBase, 3545475662);
	template<> YEOSSDK_API UClass* StaticClass<UEOSCommunityUserBase>()
	{
		return UEOSCommunityUserBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCommunityUserBase(Z_Construct_UClass_UEOSCommunityUserBase, &UEOSCommunityUserBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSCommunityUserBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCommunityUserBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
