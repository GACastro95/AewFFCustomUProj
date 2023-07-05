// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSGameChatSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSGameChatSession() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSGameChatSession();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSGameChatSession_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobby_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbyInfo_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUser_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnBlockVoice_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnBlockVoice_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnBlockVoice_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnBlockVoice__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnBlockVoice_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnBlockVoiceErr_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnBlockVoiceErr_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnBlockVoiceErr_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnBlockVoiceErr__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnBlockVoiceErr_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnMuteVoice_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnMuteVoice_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnMuteVoice_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnMuteVoice__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnMuteVoice_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnMuteVoiceErr_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnMuteVoiceErr_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnMuteVoiceErr_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnMuteVoiceErr__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnMuteVoiceErr_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnStartSpeaking_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnStartSpeaking_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnStartSpeaking_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnStartSpeaking__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnStartSpeaking_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnStopSpeaking_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnStopSpeaking_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnStopSpeaking_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnStopSpeaking__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnStopSpeaking_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnUnblockVoice_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnUnblockVoice_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnUnblockVoice_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnUnblockVoice__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnUnblockVoice_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnUnmuteVoice_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnUnmuteVoice_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnUnmuteVoice_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnUnmuteVoice__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnUnmuteVoice_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnVoiceChatConnected_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatConnected_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatConnected_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnVoiceChatConnected__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnVoiceChatConnected_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnVoiceChatDisabled_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatDisabled_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatDisabled_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnVoiceChatDisabled__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnVoiceChatDisabled_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnVoiceChatDisconnected_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatDisconnected_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatDisconnected_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnVoiceChatDisconnected__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnVoiceChatDisconnected_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnVoiceChatEnabled_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatEnabled_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatEnabled_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnVoiceChatEnabled__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnVoiceChatEnabled_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnVoiceChatJoined_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatJoined_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatJoined_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnVoiceChatJoined__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnVoiceChatJoined_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnVoiceChatLeft_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatLeft_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatLeft_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnVoiceChatLeft__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnVoiceChatLeft_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics
	{
		struct ELEOSGameChatSession_eventOnVoiceChatUnsupported_Parms
		{
			UEOSCommunityInfoBase* _CommunityInfo;
			UEOSCommunityUserBase* _CommunityUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::NewProp__CommunityInfo = { "_CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatUnsupported_Parms, _CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::NewProp__CommunityUser = { "_CommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnVoiceChatUnsupported_Parms, _CommunityUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::NewProp__CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::NewProp__CommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnVoiceChatUnsupported__DelegateSignature", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnVoiceChatUnsupported_Parms), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execBlock)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Block(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execClearBlock)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearBlock(Z_Param_ProductUserID,EEOSLobbyUserMuteFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execClearMute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearMute(Z_Param_ProductUserID,EEOSLobbyUserMuteFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execClearMuteAll)
	{
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearMuteAll(EEOSLobbyUserMuteFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execContainsPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsPlayer(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execGetBlockFlag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLobbyUserMuteFlag*)Z_Param__Result=P_THIS->GetBlockFlag(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execGetMuteFlag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLobbyUserMuteFlag*)Z_Param__Result=P_THIS->GetMuteFlag(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execGetPlayerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execGetPlayers)
	{
		P_GET_TARRAY_REF(UEOSCommunityUserBase*,Z_Param_Out__Players);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayers(Z_Param_Out__Players);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execGetSpeakingUsers)
	{
		P_GET_OBJECT_REF(UEOSCommunityInfoBase,Z_Param_Out_EOSCommunityInfo);
		P_GET_TARRAY_REF(UEOSCommunityUserBase*,Z_Param_Out_SpeakingUsers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSpeakingUsers(Z_Param_Out_EOSCommunityInfo,Z_Param_Out_SpeakingUsers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execGetVoiceChatEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVoiceChatEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execGetVoiceChatStartMuted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVoiceChatStartMuted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execGetVoiceStatus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSLobbyUserAudioStatus*)Z_Param__Result=P_THIS->GetVoiceStatus(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execHasPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPlayer(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execIsBlocked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlocked(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execIsJoined)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsJoined();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execIsMuted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMuted(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execIsSpeaking)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpeaking(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execMute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Mute(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execOnCommunityEvent)
	{
		P_GET_ENUM(EEOSCommunityEvent,Z_Param_EOSCommunityEvent);
		P_GET_OBJECT(UEOSCommunityBase,Z_Param_EOSCommunityBase);
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param_EOSCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param_EOSLobbyUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCommunityEvent(EEOSCommunityEvent(Z_Param_EOSCommunityEvent),Z_Param_EOSCommunityBase,Z_Param_EOSCommunityInfo,Z_Param_EOSLobbyUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execSetBlock)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBlock(Z_Param_ProductUserID,EEOSLobbyUserMuteFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execSetMute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMute(Z_Param_ProductUserID,EEOSLobbyUserMuteFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execSetMuteAll)
	{
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMuteAll(EEOSLobbyUserMuteFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execSetVoiceChatEnabled)
	{
		P_GET_UBOOL(Z_Param__bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVoiceChatEnabled(Z_Param__bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execSetVoiceChatStartMuted)
	{
		P_GET_UBOOL(Z_Param__bMuted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVoiceChatStartMuted(Z_Param__bMuted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execStartMatchmaking)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ProductUserIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartMatchmaking(Z_Param_Out_ProductUserIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execUnblock)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Unblock(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSGameChatSession::execUnmute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Unmute(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	void UELEOSGameChatSession::StaticRegisterNativesUELEOSGameChatSession()
	{
		UClass* Class = UELEOSGameChatSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Block", &UELEOSGameChatSession::execBlock },
			{ "ClearBlock", &UELEOSGameChatSession::execClearBlock },
			{ "ClearMute", &UELEOSGameChatSession::execClearMute },
			{ "ClearMuteAll", &UELEOSGameChatSession::execClearMuteAll },
			{ "ContainsPlayer", &UELEOSGameChatSession::execContainsPlayer },
			{ "GetBlockFlag", &UELEOSGameChatSession::execGetBlockFlag },
			{ "GetMuteFlag", &UELEOSGameChatSession::execGetMuteFlag },
			{ "GetPlayerNum", &UELEOSGameChatSession::execGetPlayerNum },
			{ "GetPlayers", &UELEOSGameChatSession::execGetPlayers },
			{ "GetSpeakingUsers", &UELEOSGameChatSession::execGetSpeakingUsers },
			{ "GetVoiceChatEnabled", &UELEOSGameChatSession::execGetVoiceChatEnabled },
			{ "GetVoiceChatStartMuted", &UELEOSGameChatSession::execGetVoiceChatStartMuted },
			{ "GetVoiceStatus", &UELEOSGameChatSession::execGetVoiceStatus },
			{ "HasPlayer", &UELEOSGameChatSession::execHasPlayer },
			{ "IsBlocked", &UELEOSGameChatSession::execIsBlocked },
			{ "IsJoined", &UELEOSGameChatSession::execIsJoined },
			{ "IsMuted", &UELEOSGameChatSession::execIsMuted },
			{ "IsSpeaking", &UELEOSGameChatSession::execIsSpeaking },
			{ "Mute", &UELEOSGameChatSession::execMute },
			{ "OnCommunityEvent", &UELEOSGameChatSession::execOnCommunityEvent },
			{ "SetBlock", &UELEOSGameChatSession::execSetBlock },
			{ "SetMute", &UELEOSGameChatSession::execSetMute },
			{ "SetMuteAll", &UELEOSGameChatSession::execSetMuteAll },
			{ "SetVoiceChatEnabled", &UELEOSGameChatSession::execSetVoiceChatEnabled },
			{ "SetVoiceChatStartMuted", &UELEOSGameChatSession::execSetVoiceChatStartMuted },
			{ "StartMatchmaking", &UELEOSGameChatSession::execStartMatchmaking },
			{ "Unblock", &UELEOSGameChatSession::execUnblock },
			{ "Unmute", &UELEOSGameChatSession::execUnmute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics
	{
		struct ELEOSGameChatSession_eventBlock_Parms
		{
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventBlock_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventBlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventBlock_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "Block", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventBlock_Parms), Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_Block()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_Block_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics
	{
		struct ELEOSGameChatSession_eventClearBlock_Parms
		{
			FString ProductUserID;
			EEOSLobbyUserMuteFlag Flag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventClearBlock_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventClearBlock_Parms, Flag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventClearBlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventClearBlock_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "ClearBlock", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventClearBlock_Parms), Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics
	{
		struct ELEOSGameChatSession_eventClearMute_Parms
		{
			FString ProductUserID;
			EEOSLobbyUserMuteFlag Flag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventClearMute_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventClearMute_Parms, Flag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventClearMute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventClearMute_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "ClearMute", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventClearMute_Parms), Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_ClearMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_ClearMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics
	{
		struct ELEOSGameChatSession_eventClearMuteAll_Parms
		{
			EEOSLobbyUserMuteFlag Flag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventClearMuteAll_Parms, Flag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventClearMuteAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventClearMuteAll_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "ClearMuteAll", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventClearMuteAll_Parms), Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics
	{
		struct ELEOSGameChatSession_eventContainsPlayer_Parms
		{
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventContainsPlayer_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventContainsPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventContainsPlayer_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "ContainsPlayer", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventContainsPlayer_Parms), Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics
	{
		struct ELEOSGameChatSession_eventGetBlockFlag_Parms
		{
			FString ProductUserID;
			EEOSLobbyUserMuteFlag ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventGetBlockFlag_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventGetBlockFlag_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "GetBlockFlag", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventGetBlockFlag_Parms), Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics
	{
		struct ELEOSGameChatSession_eventGetMuteFlag_Parms
		{
			FString ProductUserID;
			EEOSLobbyUserMuteFlag ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventGetMuteFlag_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventGetMuteFlag_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "GetMuteFlag", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventGetMuteFlag_Parms), Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics
	{
		struct ELEOSGameChatSession_eventGetPlayerNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventGetPlayerNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "GetPlayerNum", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventGetPlayerNum_Parms), Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics
	{
		struct ELEOSGameChatSession_eventGetPlayers_Parms
		{
			TArray<UEOSCommunityUserBase*> _Players;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Players_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Players;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::NewProp__Players_Inner = { "_Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::NewProp__Players = { "_Players", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventGetPlayers_Parms, _Players), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::NewProp__Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::NewProp__Players,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "GetPlayers", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventGetPlayers_Parms), Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics
	{
		struct ELEOSGameChatSession_eventGetSpeakingUsers_Parms
		{
			UEOSCommunityInfoBase* EOSCommunityInfo;
			TArray<UEOSCommunityUserBase*> SpeakingUsers;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpeakingUsers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpeakingUsers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::NewProp_EOSCommunityInfo = { "EOSCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventGetSpeakingUsers_Parms, EOSCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::NewProp_SpeakingUsers_Inner = { "SpeakingUsers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::NewProp_SpeakingUsers = { "SpeakingUsers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventGetSpeakingUsers_Parms, SpeakingUsers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventGetSpeakingUsers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventGetSpeakingUsers_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::NewProp_EOSCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::NewProp_SpeakingUsers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::NewProp_SpeakingUsers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "GetSpeakingUsers", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventGetSpeakingUsers_Parms), Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics
	{
		struct ELEOSGameChatSession_eventGetVoiceChatEnabled_Parms
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
	void Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventGetVoiceChatEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventGetVoiceChatEnabled_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "GetVoiceChatEnabled", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventGetVoiceChatEnabled_Parms), Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics
	{
		struct ELEOSGameChatSession_eventGetVoiceChatStartMuted_Parms
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
	void Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventGetVoiceChatStartMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventGetVoiceChatStartMuted_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "GetVoiceChatStartMuted", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventGetVoiceChatStartMuted_Parms), Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics
	{
		struct ELEOSGameChatSession_eventGetVoiceStatus_Parms
		{
			FString ProductUserID;
			EEOSLobbyUserAudioStatus ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventGetVoiceStatus_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventGetVoiceStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "GetVoiceStatus", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventGetVoiceStatus_Parms), Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics
	{
		struct ELEOSGameChatSession_eventHasPlayer_Parms
		{
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventHasPlayer_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventHasPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventHasPlayer_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "HasPlayer", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventHasPlayer_Parms), Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics
	{
		struct ELEOSGameChatSession_eventIsBlocked_Parms
		{
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventIsBlocked_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventIsBlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventIsBlocked_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "IsBlocked", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventIsBlocked_Parms), Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics
	{
		struct ELEOSGameChatSession_eventIsJoined_Parms
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
	void Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventIsJoined_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventIsJoined_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "IsJoined", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventIsJoined_Parms), Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_IsJoined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_IsJoined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics
	{
		struct ELEOSGameChatSession_eventIsMuted_Parms
		{
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventIsMuted_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventIsMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventIsMuted_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "IsMuted", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventIsMuted_Parms), Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_IsMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_IsMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics
	{
		struct ELEOSGameChatSession_eventIsSpeaking_Parms
		{
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventIsSpeaking_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventIsSpeaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventIsSpeaking_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "IsSpeaking", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventIsSpeaking_Parms), Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics
	{
		struct ELEOSGameChatSession_eventMute_Parms
		{
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventMute_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventMute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventMute_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "Mute", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventMute_Parms), Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_Mute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_Mute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics
	{
		struct ELEOSGameChatSession_eventOnCommunityEvent_Parms
		{
			EEOSCommunityEvent EOSCommunityEvent;
			UEOSCommunityBase* EOSCommunityBase;
			UEOSCommunityInfoBase* EOSCommunityInfo;
			UEOSCommunityUserBase* EOSLobbyUser;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EOSCommunityEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EOSCommunityEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSCommunityBase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSLobbyUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::NewProp_EOSCommunityEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::NewProp_EOSCommunityEvent = { "EOSCommunityEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnCommunityEvent_Parms, EOSCommunityEvent), Z_Construct_UEnum_yEOSSDK_EEOSCommunityEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::NewProp_EOSCommunityBase = { "EOSCommunityBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnCommunityEvent_Parms, EOSCommunityBase), Z_Construct_UClass_UEOSCommunityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::NewProp_EOSCommunityInfo = { "EOSCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnCommunityEvent_Parms, EOSCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::NewProp_EOSLobbyUser = { "EOSLobbyUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventOnCommunityEvent_Parms, EOSLobbyUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::NewProp_EOSCommunityEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::NewProp_EOSCommunityEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::NewProp_EOSCommunityBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::NewProp_EOSCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::NewProp_EOSLobbyUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "OnCommunityEvent", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventOnCommunityEvent_Parms), Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics
	{
		struct ELEOSGameChatSession_eventSetBlock_Parms
		{
			FString ProductUserID;
			EEOSLobbyUserMuteFlag Flag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventSetBlock_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventSetBlock_Parms, Flag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventSetBlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventSetBlock_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "SetBlock", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventSetBlock_Parms), Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_SetBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_SetBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics
	{
		struct ELEOSGameChatSession_eventSetMute_Parms
		{
			FString ProductUserID;
			EEOSLobbyUserMuteFlag Flag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventSetMute_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventSetMute_Parms, Flag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventSetMute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventSetMute_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "SetMute", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventSetMute_Parms), Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_SetMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_SetMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics
	{
		struct ELEOSGameChatSession_eventSetMuteAll_Parms
		{
			EEOSLobbyUserMuteFlag Flag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventSetMuteAll_Parms, Flag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventSetMuteAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventSetMuteAll_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "SetMuteAll", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventSetMuteAll_Parms), Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics
	{
		struct ELEOSGameChatSession_eventSetVoiceChatEnabled_Parms
		{
			bool _bEnabled;
			bool ReturnValue;
		};
		static void NewProp__bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::NewProp__bEnabled_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventSetVoiceChatEnabled_Parms*)Obj)->_bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::NewProp__bEnabled = { "_bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventSetVoiceChatEnabled_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::NewProp__bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventSetVoiceChatEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventSetVoiceChatEnabled_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::NewProp__bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "SetVoiceChatEnabled", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventSetVoiceChatEnabled_Parms), Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics
	{
		struct ELEOSGameChatSession_eventSetVoiceChatStartMuted_Parms
		{
			bool _bMuted;
			bool ReturnValue;
		};
		static void NewProp__bMuted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bMuted;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::NewProp__bMuted_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventSetVoiceChatStartMuted_Parms*)Obj)->_bMuted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::NewProp__bMuted = { "_bMuted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventSetVoiceChatStartMuted_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::NewProp__bMuted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventSetVoiceChatStartMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventSetVoiceChatStartMuted_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::NewProp__bMuted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "SetVoiceChatStartMuted", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventSetVoiceChatStartMuted_Parms), Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics
	{
		struct ELEOSGameChatSession_eventStartMatchmaking_Parms
		{
			TArray<FString> ProductUserIDs;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProductUserIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ProductUserIDs_Inner = { "ProductUserIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ProductUserIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ProductUserIDs = { "ProductUserIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventStartMatchmaking_Parms, ProductUserIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ProductUserIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ProductUserIDs_MetaData)) };
	void Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventStartMatchmaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventStartMatchmaking_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ProductUserIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ProductUserIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "StartMatchmaking", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventStartMatchmaking_Parms), Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics
	{
		struct ELEOSGameChatSession_eventUnblock_Parms
		{
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventUnblock_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventUnblock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventUnblock_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "Unblock", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventUnblock_Parms), Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_Unblock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_Unblock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics
	{
		struct ELEOSGameChatSession_eventUnmute_Parms
		{
			FString ProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSGameChatSession_eventUnmute_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::NewProp_ProductUserID_MetaData)) };
	void Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSGameChatSession_eventUnmute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSGameChatSession_eventUnmute_Parms), &Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSGameChatSession, nullptr, "Unmute", nullptr, nullptr, sizeof(ELEOSGameChatSession_eventUnmute_Parms), Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSGameChatSession_Unmute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSGameChatSession_Unmute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSGameChatSession_NoRegister()
	{
		return UELEOSGameChatSession::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSGameChatSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSLobbyInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSLobbyInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSUser;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReservedPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReservedPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostProductUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostProductUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVoiceChatStartMuted_MetaData[];
#endif
		static void NewProp_bVoiceChatStartMuted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVoiceChatStartMuted;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MuteFlag_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuteFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MuteFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVoiceChatConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceChatConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVoiceChatDisconnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceChatDisconnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVoiceChatJoined_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceChatJoined;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVoiceChatLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceChatLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVoiceChatEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceChatEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVoiceChatDisabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceChatDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVoiceChatUnsupported_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoiceChatUnsupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStartSpeaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartSpeaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStopSpeaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopSpeaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMuteVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMuteVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnmuteVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnmuteVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMuteVoiceErr_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMuteVoiceErr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBlockVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlockVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnblockVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnblockVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBlockVoiceErr_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlockVoiceErr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSGameChatSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSGameChatSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSGameChatSession_Block, "Block" }, // 1388634060
		{ &Z_Construct_UFunction_UELEOSGameChatSession_ClearBlock, "ClearBlock" }, // 1841866875
		{ &Z_Construct_UFunction_UELEOSGameChatSession_ClearMute, "ClearMute" }, // 1386635768
		{ &Z_Construct_UFunction_UELEOSGameChatSession_ClearMuteAll, "ClearMuteAll" }, // 1534760998
		{ &Z_Construct_UFunction_UELEOSGameChatSession_ContainsPlayer, "ContainsPlayer" }, // 2048661998
		{ &Z_Construct_UFunction_UELEOSGameChatSession_GetBlockFlag, "GetBlockFlag" }, // 1583751211
		{ &Z_Construct_UFunction_UELEOSGameChatSession_GetMuteFlag, "GetMuteFlag" }, // 2328774376
		{ &Z_Construct_UFunction_UELEOSGameChatSession_GetPlayerNum, "GetPlayerNum" }, // 484594659
		{ &Z_Construct_UFunction_UELEOSGameChatSession_GetPlayers, "GetPlayers" }, // 1153561237
		{ &Z_Construct_UFunction_UELEOSGameChatSession_GetSpeakingUsers, "GetSpeakingUsers" }, // 2449048180
		{ &Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatEnabled, "GetVoiceChatEnabled" }, // 1682353038
		{ &Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceChatStartMuted, "GetVoiceChatStartMuted" }, // 2045595165
		{ &Z_Construct_UFunction_UELEOSGameChatSession_GetVoiceStatus, "GetVoiceStatus" }, // 3326853770
		{ &Z_Construct_UFunction_UELEOSGameChatSession_HasPlayer, "HasPlayer" }, // 2263589020
		{ &Z_Construct_UFunction_UELEOSGameChatSession_IsBlocked, "IsBlocked" }, // 2738138888
		{ &Z_Construct_UFunction_UELEOSGameChatSession_IsJoined, "IsJoined" }, // 696026360
		{ &Z_Construct_UFunction_UELEOSGameChatSession_IsMuted, "IsMuted" }, // 3161772950
		{ &Z_Construct_UFunction_UELEOSGameChatSession_IsSpeaking, "IsSpeaking" }, // 14877533
		{ &Z_Construct_UFunction_UELEOSGameChatSession_Mute, "Mute" }, // 586140086
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature, "OnBlockVoice__DelegateSignature" }, // 1187937625
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature, "OnBlockVoiceErr__DelegateSignature" }, // 611887942
		{ &Z_Construct_UFunction_UELEOSGameChatSession_OnCommunityEvent, "OnCommunityEvent" }, // 1043904463
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature, "OnMuteVoice__DelegateSignature" }, // 2086789476
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature, "OnMuteVoiceErr__DelegateSignature" }, // 2047164186
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature, "OnStartSpeaking__DelegateSignature" }, // 786074522
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature, "OnStopSpeaking__DelegateSignature" }, // 3048985366
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature, "OnUnblockVoice__DelegateSignature" }, // 2560609177
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature, "OnUnmuteVoice__DelegateSignature" }, // 2566242688
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature, "OnVoiceChatConnected__DelegateSignature" }, // 1065492124
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature, "OnVoiceChatDisabled__DelegateSignature" }, // 2322946467
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature, "OnVoiceChatDisconnected__DelegateSignature" }, // 2669565414
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature, "OnVoiceChatEnabled__DelegateSignature" }, // 997276512
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature, "OnVoiceChatJoined__DelegateSignature" }, // 2018154708
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature, "OnVoiceChatLeft__DelegateSignature" }, // 665288197
		{ &Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature, "OnVoiceChatUnsupported__DelegateSignature" }, // 1574746504
		{ &Z_Construct_UFunction_UELEOSGameChatSession_SetBlock, "SetBlock" }, // 2126643742
		{ &Z_Construct_UFunction_UELEOSGameChatSession_SetMute, "SetMute" }, // 1329504727
		{ &Z_Construct_UFunction_UELEOSGameChatSession_SetMuteAll, "SetMuteAll" }, // 1724247208
		{ &Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatEnabled, "SetVoiceChatEnabled" }, // 2627235476
		{ &Z_Construct_UFunction_UELEOSGameChatSession_SetVoiceChatStartMuted, "SetVoiceChatStartMuted" }, // 1277700060
		{ &Z_Construct_UFunction_UELEOSGameChatSession_StartMatchmaking, "StartMatchmaking" }, // 2500139909
		{ &Z_Construct_UFunction_UELEOSGameChatSession_Unblock, "Unblock" }, // 1181899796
		{ &Z_Construct_UFunction_UELEOSGameChatSession_Unmute, "Unmute" }, // 3449722846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSGameChatSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSLobby = { "EOSLobby", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, EOSLobby), Z_Construct_UClass_UEOSLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSLobbyInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSLobbyInfo = { "EOSLobbyInfo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, EOSLobbyInfo), Z_Construct_UClass_UEOSLobbyInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSLobbyInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSLobbyInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSUser = { "EOSUser", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, EOSUser), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSUser_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_ReservedPlayers_Inner = { "ReservedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_ReservedPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_ReservedPlayers = { "ReservedPlayers", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, ReservedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_ReservedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_ReservedPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_HostProductUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_HostProductUserId = { "HostProductUserId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, HostProductUserId), METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_HostProductUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_HostProductUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_bVoiceChatStartMuted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	void Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_bVoiceChatStartMuted_SetBit(void* Obj)
	{
		((UELEOSGameChatSession*)Obj)->bVoiceChatStartMuted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_bVoiceChatStartMuted = { "bVoiceChatStartMuted", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELEOSGameChatSession), &Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_bVoiceChatStartMuted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_bVoiceChatStartMuted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_bVoiceChatStartMuted_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_MuteFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_MuteFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_MuteFlag = { "MuteFlag", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, MuteFlag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_MuteFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_MuteFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatConnected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatConnected = { "OnVoiceChatConnected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnVoiceChatConnected), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatDisconnected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatDisconnected = { "OnVoiceChatDisconnected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnVoiceChatDisconnected), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisconnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatDisconnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatJoined_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatJoined = { "OnVoiceChatJoined", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnVoiceChatJoined), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatJoined__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatJoined_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatJoined_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatLeft = { "OnVoiceChatLeft", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnVoiceChatLeft), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatLeft__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatEnabled = { "OnVoiceChatEnabled", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnVoiceChatEnabled), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatEnabled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatDisabled = { "OnVoiceChatDisabled", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnVoiceChatDisabled), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatDisabled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatUnsupported_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatUnsupported = { "OnVoiceChatUnsupported", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnVoiceChatUnsupported), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnVoiceChatUnsupported__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatUnsupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatUnsupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnStartSpeaking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnStartSpeaking = { "OnStartSpeaking", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnStartSpeaking), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStartSpeaking__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnStartSpeaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnStartSpeaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnStopSpeaking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnStopSpeaking = { "OnStopSpeaking", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnStopSpeaking), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnStopSpeaking__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnStopSpeaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnStopSpeaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnMuteVoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnMuteVoice = { "OnMuteVoice", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnMuteVoice), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoice__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnMuteVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnMuteVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnUnmuteVoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnUnmuteVoice = { "OnUnmuteVoice", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnUnmuteVoice), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnmuteVoice__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnUnmuteVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnUnmuteVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnMuteVoiceErr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnMuteVoiceErr = { "OnMuteVoiceErr", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnMuteVoiceErr), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnMuteVoiceErr__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnMuteVoiceErr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnMuteVoiceErr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnBlockVoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnBlockVoice = { "OnBlockVoice", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnBlockVoice), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoice__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnBlockVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnBlockVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnUnblockVoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnUnblockVoice = { "OnUnblockVoice", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnUnblockVoice), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnUnblockVoice__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnUnblockVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnUnblockVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnBlockVoiceErr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameChatSession" },
		{ "ModuleRelativePath", "Public/ELEOSGameChatSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnBlockVoiceErr = { "OnBlockVoiceErr", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSGameChatSession, OnBlockVoiceErr), Z_Construct_UDelegateFunction_UELEOSGameChatSession_OnBlockVoiceErr__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnBlockVoiceErr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnBlockVoiceErr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSGameChatSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSLobbyInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_EOSUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_ReservedPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_ReservedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_HostProductUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_bVoiceChatStartMuted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_MuteFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_MuteFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatJoined,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnVoiceChatUnsupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnStartSpeaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnStopSpeaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnMuteVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnUnmuteVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnMuteVoiceErr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnBlockVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnUnblockVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSGameChatSession_Statics::NewProp_OnBlockVoiceErr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSGameChatSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSGameChatSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSGameChatSession_Statics::ClassParams = {
		&UELEOSGameChatSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELEOSGameChatSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSGameChatSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSGameChatSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSGameChatSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSGameChatSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSGameChatSession, 4194059202);
	template<> ABP_200508_API UClass* StaticClass<UELEOSGameChatSession>()
	{
		return UELEOSGameChatSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSGameChatSession(Z_Construct_UClass_UELEOSGameChatSession, &UELEOSGameChatSession::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSGameChatSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSGameChatSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
