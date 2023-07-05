// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EOSLobbyEvent2Delegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLobbyEvent2Delegate() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyEventType();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics
	{
		struct _Script_ABP_200508_eventEOSLobbyEvent2_Parms
		{
			EELEOSLobbyEventType EventType;
			UEOSUserBase* _User;
			UEOSCommunityInfoBase* _CommunityInfoBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__User;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfoBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventEOSLobbyEvent2_Parms, EventType), Z_Construct_UEnum_ABP_200508_EELEOSLobbyEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::NewProp__User = { "_User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventEOSLobbyEvent2_Parms, _User), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::NewProp__CommunityInfoBase = { "_CommunityInfoBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ABP_200508_eventEOSLobbyEvent2_Parms, _CommunityInfoBase), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::NewProp__User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::NewProp__CommunityInfoBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobbyEvent2Delegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ABP_200508, nullptr, "EOSLobbyEvent2__DelegateSignature", nullptr, nullptr, sizeof(_Script_ABP_200508_eventEOSLobbyEvent2_Parms), Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyEvent2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
