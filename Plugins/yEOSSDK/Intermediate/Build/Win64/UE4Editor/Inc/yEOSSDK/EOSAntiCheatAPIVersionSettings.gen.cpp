// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAntiCheatAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAntiCheatAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSAntiCheatAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSAntiCheatAPIVersionSettings"), sizeof(FEOSAntiCheatAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSAntiCheatAPIVersionSettings>()
{
	return FEOSAntiCheatAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSAntiCheatAPIVersionSettings(FEOSAntiCheatAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSAntiCheatAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAntiCheatAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAntiCheatAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSAntiCheatAPIVersionSettings>(FName(TEXT("EOSAntiCheatAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAntiCheatAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyMessageToPeer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyMessageToPeer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyPeerActionRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyPeerActionRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyPeerAuthStatusChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyPeerAuthStatusChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyClientIntegrityViolated_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyClientIntegrityViolated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveMessageFromPeer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReceiveMessageFromPeer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeginSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PollStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisterPeer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegisterPeer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnregisterPeer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnregisterPeer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSAntiCheatAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyMessageToPeer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyMessageToPeer = { "AddNotifyMessageToPeer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAntiCheatAPIVersionSettings, AddNotifyMessageToPeer), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyMessageToPeer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyMessageToPeer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyPeerActionRequired_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyPeerActionRequired = { "AddNotifyPeerActionRequired", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAntiCheatAPIVersionSettings, AddNotifyPeerActionRequired), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyPeerActionRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyPeerActionRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyPeerAuthStatusChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyPeerAuthStatusChanged = { "AddNotifyPeerAuthStatusChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAntiCheatAPIVersionSettings, AddNotifyPeerAuthStatusChanged), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyPeerAuthStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyPeerAuthStatusChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyClientIntegrityViolated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyClientIntegrityViolated = { "AddNotifyClientIntegrityViolated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAntiCheatAPIVersionSettings, AddNotifyClientIntegrityViolated), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyClientIntegrityViolated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyClientIntegrityViolated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_ReceiveMessageFromPeer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_ReceiveMessageFromPeer = { "ReceiveMessageFromPeer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAntiCheatAPIVersionSettings, ReceiveMessageFromPeer), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_ReceiveMessageFromPeer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_ReceiveMessageFromPeer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_BeginSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_BeginSession = { "BeginSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAntiCheatAPIVersionSettings, BeginSession), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_BeginSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_BeginSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_EndSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_EndSession = { "EndSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAntiCheatAPIVersionSettings, EndSession), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_EndSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_EndSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_PollStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_PollStatus = { "PollStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAntiCheatAPIVersionSettings, PollStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_PollStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_PollStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_RegisterPeer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_RegisterPeer = { "RegisterPeer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAntiCheatAPIVersionSettings, RegisterPeer), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_RegisterPeer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_RegisterPeer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_UnregisterPeer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_UnregisterPeer = { "UnregisterPeer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAntiCheatAPIVersionSettings, UnregisterPeer), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_UnregisterPeer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_UnregisterPeer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyMessageToPeer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyPeerActionRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyPeerAuthStatusChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_AddNotifyClientIntegrityViolated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_ReceiveMessageFromPeer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_BeginSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_EndSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_PollStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_RegisterPeer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::NewProp_UnregisterPeer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSAntiCheatAPIVersionSettings",
		sizeof(FEOSAntiCheatAPIVersionSettings),
		alignof(FEOSAntiCheatAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSAntiCheatAPIVersionSettings"), sizeof(FEOSAntiCheatAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings_Hash() { return 3263080379U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
