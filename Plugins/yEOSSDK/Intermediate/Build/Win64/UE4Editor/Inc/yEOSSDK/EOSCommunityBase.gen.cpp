// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSCommunityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCommunityBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSCommunityEventDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSCommunitySearchResultEventDispatcher__DelegateSignature();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSCommunityBase::execGetInviteCommunities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UEOSCommunityInfoBase*>*)Z_Param__Result=P_THIS->GetInviteCommunities();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityBase::execGetJoinCommunities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UEOSCommunityInfoBase*>*)Z_Param__Result=P_THIS->GetJoinCommunities();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSCommunityBase::execGetOwnCommunities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UEOSCommunityInfoBase*>*)Z_Param__Result=P_THIS->GetOwnCommunities();
		P_NATIVE_END;
	}
	void UEOSCommunityBase::StaticRegisterNativesUEOSCommunityBase()
	{
		UClass* Class = UEOSCommunityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInviteCommunities", &UEOSCommunityBase::execGetInviteCommunities },
			{ "GetJoinCommunities", &UEOSCommunityBase::execGetJoinCommunities },
			{ "GetOwnCommunities", &UEOSCommunityBase::execGetOwnCommunities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics
	{
		struct EOSCommunityBase_eventGetInviteCommunities_Parms
		{
			TMap<FString,UEOSCommunityInfoBase*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityBase_eventGetInviteCommunities_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityBase, nullptr, "GetInviteCommunities", nullptr, nullptr, sizeof(EOSCommunityBase_eventGetInviteCommunities_Parms), Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics
	{
		struct EOSCommunityBase_eventGetJoinCommunities_Parms
		{
			TMap<FString,UEOSCommunityInfoBase*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityBase_eventGetJoinCommunities_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityBase, nullptr, "GetJoinCommunities", nullptr, nullptr, sizeof(EOSCommunityBase_eventGetJoinCommunities_Parms), Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics
	{
		struct EOSCommunityBase_eventGetOwnCommunities_Parms
		{
			TMap<FString,UEOSCommunityInfoBase*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSCommunityBase_eventGetOwnCommunities_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSCommunityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSCommunityBase, nullptr, "GetOwnCommunities", nullptr, nullptr, sizeof(EOSCommunityBase_eventGetOwnCommunities_Parms), Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSCommunityBase_NoRegister()
	{
		return UEOSCommunityBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCommunityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CommunityEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunitySearchResultEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CommunitySearchResultEventDispatcher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cOwnCommunities_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cOwnCommunities_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cOwnCommunities_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cOwnCommunities;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cInviteCommunities_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cInviteCommunities_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cInviteCommunities_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cInviteCommunities;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cJoinCommunities_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cJoinCommunities_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cJoinCommunities_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cJoinCommunities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcUserManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcUserManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCommunityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSCommunityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSCommunityBase_GetInviteCommunities, "GetInviteCommunities" }, // 3862677844
		{ &Z_Construct_UFunction_UEOSCommunityBase_GetJoinCommunities, "GetJoinCommunities" }, // 925236656
		{ &Z_Construct_UFunction_UEOSCommunityBase_GetOwnCommunities, "GetOwnCommunities" }, // 2140397554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSCommunityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSCommunityBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_CommunityEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_CommunityEventDispatcher = { "CommunityEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityBase, CommunityEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSCommunityEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_CommunityEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_CommunityEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_CommunitySearchResultEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_CommunitySearchResultEventDispatcher = { "CommunitySearchResultEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityBase, CommunitySearchResultEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSCommunitySearchResultEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_CommunitySearchResultEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_CommunitySearchResultEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cOwnCommunities_ValueProp = { "m_cOwnCommunities", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cOwnCommunities_Key_KeyProp = { "m_cOwnCommunities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cOwnCommunities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cOwnCommunities = { "m_cOwnCommunities", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityBase, m_cOwnCommunities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cOwnCommunities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cOwnCommunities_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cInviteCommunities_ValueProp = { "m_cInviteCommunities", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cInviteCommunities_Key_KeyProp = { "m_cInviteCommunities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cInviteCommunities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cInviteCommunities = { "m_cInviteCommunities", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityBase, m_cInviteCommunities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cInviteCommunities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cInviteCommunities_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cJoinCommunities_ValueProp = { "m_cJoinCommunities", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cJoinCommunities_Key_KeyProp = { "m_cJoinCommunities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cJoinCommunities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cJoinCommunities = { "m_cJoinCommunities", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityBase, m_cJoinCommunities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cJoinCommunities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cJoinCommunities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_pcUserManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityBase" },
		{ "ModuleRelativePath", "Public/EOSCommunityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_pcUserManager = { "m_pcUserManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityBase, m_pcUserManager), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_pcUserManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_pcUserManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCommunityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_CommunityEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_CommunitySearchResultEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cOwnCommunities_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cOwnCommunities_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cOwnCommunities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cInviteCommunities_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cInviteCommunities_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cInviteCommunities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cJoinCommunities_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cJoinCommunities_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_cJoinCommunities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityBase_Statics::NewProp_m_pcUserManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCommunityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCommunityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCommunityBase_Statics::ClassParams = {
		&UEOSCommunityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSCommunityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCommunityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCommunityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCommunityBase, 526458548);
	template<> YEOSSDK_API UClass* StaticClass<UEOSCommunityBase>()
	{
		return UEOSCommunityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCommunityBase(Z_Construct_UClass_UEOSCommunityBase, &UEOSCommunityBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSCommunityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCommunityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
